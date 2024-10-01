package main

import (
	"io/ioutil"
	"os"
)

func create(directory string) {
	outputFile, _ := ioutil.TempFile("", "output.txt")
	defer outputFile.Close()

	docsDir, _ := ioutil.TempDir("", "docs")
	defer os.RemoveAll(docsDir)
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
