package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"path/filepath"
)

func printFileSize(filename string) {
	absPath, err := filepath.Abs(filename)
	if err != nil {
		log.Fatal(err)
	}
	fileInfo, err := ioutil.ReadFile(absPath)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of file %s is %d bytes.\n", filename, len(fileInfo))
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
