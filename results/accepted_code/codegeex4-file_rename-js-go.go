package main

import (
	"log"
	"os"
	"path/filepath"
)

func renameFiles() {
	var err error

	err = os.Rename("input.txt", "output.txt")
	check(err)

	err = os.Rename("docs", "mydocs")
	check(err)
}

func renameFilesInRoot() {
	var err error

	root, err := filepath.Abs("/")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename(filepath.Join(root, "input.txt"), filepath.Join(root, "output.txt"))
	check(err)

	err = os.Rename(filepath.Join(root, "docs"), filepath.Join(root, "mydocs"))
	check(err)
}

func check(e error) {
	if e != nil {
		log.Fatal(e)
	}
}

func main() {
	renameFiles()
	renameFilesInRoot()
}
