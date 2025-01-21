package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	fileName := os.Args[1]
	if len(fileName) == 0 {
		log.Fatal("No file name supplied")
	}

	fileInfo, err := ioutil.Stat(fileName)
	if err != nil {
		log.Fatalf("Error: %v", err)
	}

	fmt.Printf("Size of %s is %d bytes\n", fileName, fileInfo.Size())
}
