package main

import (
	"errors"
	"io/ioutil"
	"os"
)

func renameFile(oldname, newname string) error {

	// Check if old name and new name are valid paths or directories.
	if _, err := os.Stat(oldname); errors.Is(err, os.PathError) || (err == nil && !fileInfo.Mode().IsRegular()) {
		return errors.New("invalid path: " + oldname)
	}

	if _, err := os.Stat(newname); errors.Is(err, os.PathError) || (err == nil && !fileInfo2.Mode().IsRegular())) {
		return errors.New("invalid path: " + newname))
	}

	// Rename file (or directory)
	if err := os.Rename(oldname, newname); err != nil {
		return err
	}

	return nil
}

func test(typ string, oldname string, newname string) {
	err := renameFile(oldname, newname)
	printResult(&testInfo{
		Type:        typ,
		OldName:   oldname,
		NewName:   newname,
		ExpectedError: err,
	}, success))
}

func main() {

	// Run tests twice: once "here", i.e. in the current working directory and once in the filesystem root.
	test("file", "input.txt", "output.txt")
	test("file", string(os.PathSeparator)+"input.txt"+string(os.PathSeparator), string(os.PathSeparator)+"output.txt"+string(os.PathSeparator));
	test("directory", "docs", "mydocs")
	test("directory", string(os.PathSeparator)+"docs"+string(os.PathSeparator), string(os.PathSeparator)+"mydocs"+string(os.PathSeparator)));
}