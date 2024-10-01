package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Create a new empty file called "output.txt" of size 0 bytes in the current working directory
	file, err := os.Create("output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	// Create a new empty directory called "docs" in the root of the filesystem
	dir, err := os.Create("docs")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer dir.Close()

	// Write some content to the file
	_, err = file.WriteString("This is a test file.")
	if err != nil {
		fmt.Println(err)
		return
	}

	// Read the contents of the file
	data, err := ioutil.ReadFile("output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(string(data))

	// List the contents of the directory
	files, err := dir.Readdirnames(-1)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(files)
}
