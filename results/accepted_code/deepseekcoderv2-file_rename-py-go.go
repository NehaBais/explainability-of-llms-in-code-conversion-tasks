package main

import (
	"fmt"
	"io/fs"
	"log"
	"os"
	"path/filepath"
)

func renameFileAndDir(dir string, file string) error {
	err := os.Rename(filepath.Join(dir, file), filepath.Join(dir, fmt.Sprintf("my%s", file)))
	if err != nil {
		return err
	}

	return nil
}

func renameFileAndDirRoot(file string) error {
	err := os.Rename(filepath.Join(os.Getenv("HOME"), file), filepath.Join(os.Getenv("HOME"), fmt.Sprintf("my%s", file)))
	if err != nil {
		return err
	}

	return nil
}

func main() {
	err := renameFileAndDir("./docs", "input.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = renameFileAndDirRoot("output.txt")
	if err != nil {
		log.Fatal(err)
	}
}
