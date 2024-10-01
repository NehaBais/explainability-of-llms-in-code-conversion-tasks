package main

import (
	"log"
	"os"
)

func main() {
	// Rename files and directories in the current working directory.
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}

	// Rename files and directories in the filesystem root.
	err = os.Rename(os.Getenv("HOME")+"/input.txt", os.Getenv("HOME")+"/output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename(os.Getenv("HOME")+"/docs", os.Getenv("HOME")+"/mydocs")
	if err != nil {
		log.Fatal(err)
	}
}
