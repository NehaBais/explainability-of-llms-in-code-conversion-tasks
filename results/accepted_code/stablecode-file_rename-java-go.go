package main

import (
	"io/ioutil"
	"os"
)

func renameFile(oldname, newname string) bool {

	// File (or directory) with old name
	file, err := os.Stat(oldname)
	if err != nil {
		return false
	}

	// File (or directory) with new name
	file2, err := os.Stat(newname)
	if err == nil && file.Name() == file2.Name() {
		return false
	}

	err = os.Rename(oldname, newname)
	return err == nil
}

func test(typ string, oldname string, newname string) {
	success := renameFile(oldname, newname)
	printResult(&testInfo{
		Type:    typ,
		OldName: oldname,
		NewName: newname,
	}, success))
}

func main() {

	// Run tests twice: once "here", i.e. in the current working directory and once in the filesystem root.
	test("file", "input.txt", "output.txt")
	test("file", string(os.PathSeparator)+"input.txt"+string(os.PathSeparator), string(os.PathSeparator)+"output.txt"+string(os.PathSeparator));
	test("directory", "docs", "mydocs")
	test("directory", string(os.PathSeparator)+"docs"+string(os.PathSeparator), string(os.PathSeparator)+"mydocs"+string(os.PathSeparator)))
}