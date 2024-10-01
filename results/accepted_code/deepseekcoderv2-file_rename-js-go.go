package main

import (
	"fmt"
	fs "io/fs"
)

func main() {
	var fso FSO = &FSOImpl{}
	fso.RenameFile("input.txt", "output.txt")
	fmt.Println(fso.GetCurrentDirectory())
}

type FS interface {
	RenameFolder(old, new string) error
	ExistsFolder(path string) bool
	CreateNewFolder(name string) (fs.DirEntry, error)
	RemoveFolder(path string) error
	RenameFile(old, new string) error
	GetCurrentDirectory() string
}
type FSO interface {
	FS
}

type FSOImpl struct {
	fs fs.FS
}

func (fso *FSOImpl) RenameFolder(oldName, newName string) error {
	if fso.ExistsFolder(newName) {
		return fmt.Errorf("folder %s already exists", newName)
	}
	// make sure parent folder exists
	parentDir := oldName[:len(oldName)-len(newName)] // remove last part of the path, since this is the name we want to rename to
	if !fso.ExistsFolder(parentDir) {
		return fmt.Errorf("folder %s does not exist", parentDir)
	}
	err := fso.RemoveFolder(oldName)
	if err != nil {
		return err
	}
	return fso.CreateNewFolder(newName)
}
func (fso *FSOImpl) GetCurrentDirectory() string {
	return "/go" //TODO: get current directory
}
func (fso *FSOImpl) ExistsFolder(path string) bool {
	if _, err := fso.fs.Open(path); os.IsNotExist(err) {
		return false
	}
	return true
}
func (fso *FSOImpl) CreateNewFolder(name string) (fs.DirEntry, error) {
	// check if folder already exists
	if fso.ExistsFolder(name) {
		return nil, fmt.Errorf("folder %s already exists", name)
	}
	fh, err := fso.fs.Open(fso.GetCurrentDirectory())
	if err != nil {
		return nil, err
	}
	defer func() { _ = fh.Close() }()
	return fh.Create(name)
}
func (fso *FSOImpl) RemoveFolder(path string) error {
	return os.RemoveAll(path)
}
func (fso *FSOImpl) RenameFile(old, new string) error {
	// check if file exists
	if !fso.ExistsFolder(new) {
		return fmt.Errorf("file %s does not exist", old)
	}
	return os.Rename(old, new)
}
