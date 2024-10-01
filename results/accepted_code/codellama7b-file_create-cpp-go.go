package main

import (
	"io/ioutil"
	"os"
)

func main() {
	// Create an empty file called "output.txt" of size 0 bytes and an empty directory called "docs"
	err := ioutil.WriteFile("output.txt", []byte{}, 0644)
	if err != nil {
		panic(err)
	}
	err = os.MkdirAll("docs", 0755)
	if err != nil {
		panic(err)
	}

	// Create an empty file called "output.txt" of size 0 bytes in the filesystem root
	err := ioutil.WriteFile("/output.txt", []byte{}, 0644)
	if err != nil {
		panic(err)
	}
	// Create an empty directory called "docs" in the filesystem root
	err = os.MkdirAll("/docs", 0755)
	if err != nil {
		panic(err)
	}
}
