package main

import (
	"log"
	"os"
)

func createDir(path string) {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		log.Fatalf("An error occurred while creating directory: %s", err)
	}
}

func main() {
	createDir("./path/to/dir")
}
