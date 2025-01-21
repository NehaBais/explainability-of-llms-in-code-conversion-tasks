package main

import (
	"log"
	"os"
	"path/filepath"
)

func rename() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}

	root := "/input.txt" // note that we're using a forward slash here as filepath.Separator doesn't work with root directories
	err = os.Rename(root, "/output.txt")
	if err != nil {
		log.Fatal(err)
	}

	root = "/docs"
	err = os.Rename(root, "/mydocs")
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	rename()
}
