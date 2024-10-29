package main

import (
	"fmt"
	"io/ioutil"
	"log"
)

func fileSize(filePath string) {
	size, err := ioutil.ReadFile(filePath)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Size of the file is:", len(size))
}

func main() {
	// For 'input.txt' in current directory
	fileSize("./input.txt")

	// For '/input.txt' at root directory
	fileSize("/input.txt")
}
