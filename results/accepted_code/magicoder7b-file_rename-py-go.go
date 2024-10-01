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

	root := filepath.Separator + "input.txt"
	err = os.Rename(root, filepath.Join(filepath.Separator, "output.txt"))
	if err != nil {
		log.Fatal(err)
	}

	root = filepath.Separator + "docs"
	err = os.Rename(root, filepath.Join(filepath.Separator, "mydocs"))
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	rename()
}
