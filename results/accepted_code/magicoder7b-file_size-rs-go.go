package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	fileName1 := "/path/to/yourfile.txt" // Provide the path to your file here
	fileInfo, err := os.Stat(fileName1)
	if err != nil {
		log.Fatalf("Could not get size of %s: %v", fileName1, err)
	}
	fmt.Printf("Size of %s is %d bytes\n", fileName1, fileInfo.Size())

	// For another file in the root directory
	fileName2 := "/root/anotherfile.txt"
	fileInfo, err = os.Stat(fileName2)
	if err != nil {
		log.Fatalf("Could not get size of %s: %v", fileName2, err)
	}
	fmt.Printf("Size of %s is %d bytes\n", fileName2, fileInfo.Size())
}
