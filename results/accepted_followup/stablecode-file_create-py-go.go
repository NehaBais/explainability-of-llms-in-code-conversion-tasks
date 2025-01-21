package main

import (
	"io/ioutil"
	"os"
	"path"
)

func create(directory string) {
	err := os.MkdirAll(directory, 0777))
	if err != nil {
		panic(err)
	}

	outputFilePath := path.Join(directory, "output.txt"))
	
	_, err = ioutil.ReadFile(outputFilePath)) // This will create an empty output file.
	if err != nil {
		panic(err)
	}

	 // Create empty directory "docs" in the specified directory.
	dirsToCreate := []string{"docs"}}
	
	for _, dirName := range dirsToCreate {
		err = os.MkdirAll(path.Join(directory, dirName)), 0777)
		if err != nil {
			panic(err)
		}
	}
}

func main() {
	create(".") // Current directory
	create("/") // Root directory
}