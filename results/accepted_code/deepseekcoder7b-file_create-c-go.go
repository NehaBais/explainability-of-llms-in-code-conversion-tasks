package main

import (
	"io/ioutil"
	"log"
	"os"
	"path/filepath"
)

func createFile(name string) {
	dir := filepath.Dir(name)
	_ = os.MkdirAll(dir, 0750)

	file, err := os.OpenFile(name, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, 0640)
	if err != nil {
		log.Fatalf("failed to create file: %s", name)
	}
	_ = file.Close()
}

func main() {
	// Create files "here" in the current working directory and root
	for _, path := range []string{"output.txt", "/output.txt"} {
		createFile(path)
	}

	// Creates an empty dir "docs" here in the current working directory
	// and root (equivalent to mkdir -p command).
	for _, dir := range []string{"docs", "/docs"} {
		err := os.MkdirAll(dir, 0750)
		if err != nil && !os.IsExist(err) {
			log.Fatalf("failed to create directory: %s", dir)
		}
	}
}
