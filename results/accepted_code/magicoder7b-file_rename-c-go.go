package main

import (
	"fmt"
	"log"
	"os"
)

func renameInCurrentDirectory() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}
}

func renameInRoot() {
	err := os.Rename("/input.txt", "/output.txt")
	if err != nil {
		log.Fatal(err)
	}
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	renameInCurrentDirectory()
	fmt.Println("Done renaming in current directory")
	renameInRoot()
	fmt.Println("Done renaming in root directory")
}
