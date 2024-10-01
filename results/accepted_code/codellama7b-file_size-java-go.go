package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	// Get the current working directory
	wd, err := os.Getwd()
	if err != nil {
		log.Fatal(err)
	}

	// Create a new file object for the input.txt file in the current working directory
	fileA, err := os.Open("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer fileA.Close()

	// Get the size of the input.txt file
	fileASize, err := fileA.Stat().Size()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Printf("%d B\n", fileASize)

	// Create a new file object for the input.txt file in the root directory of the file system
	fileB, err := os.Open("/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer fileB.Close()

	// Get the size of the input.txt file in the root directory
	fileBSize, err := fileB.Stat().Size()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Printf("%d B\n", fileBSize)
}
