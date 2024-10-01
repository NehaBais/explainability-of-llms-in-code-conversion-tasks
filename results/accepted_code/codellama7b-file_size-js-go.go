package main

import (
	"log"
	"os"
)

func main() {
	// Get file size of input.txt in current working directory
	currentFile, err := os.Open("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer currentFile.Close()

	size, err := currentFile.Stat()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Size of input.txt in current working directory:", size.Size())

	// Get file size of c:/input.txt in file system root
	rootFile, err := os.Open("c:/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer rootFile.Close()

	size, err = rootFile.Stat()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Size of c:/input.txt in file system root:", size.Size())
}
