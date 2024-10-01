package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Create a new empty file called "output.txt" of size 0 bytes in the current working directory
	file, err := ioutil.TempFile("", "output.txt")
	if err != nil {
		fmt.Println(err)
	}
	defer os.Remove(file.Name())

	// Create a new empty file called "output.txt" of size 0 bytes in the filesystem root
	rootFile, err := ioutil.TempFile("/", "output.txt")
	if err != nil {
		fmt.Println(err)
	}
	defer os.Remove(rootFile.Name())

	// Create an empty directory called "docs" in the current working directory
	dir, err := ioutil.TempDir("", "docs")
	if err != nil {
		fmt.Println(err)
	}
	defer os.RemoveAll(dir)

	// Create an empty directory called "docs" in the filesystem root
	rootDir, err := ioutil.TempDir("/", "docs")
	if err != nil {
		fmt.Println(err)
	}
	defer os.RemoveAll(rootDir)

	// Print the paths of the created files and directories
	fmt.Println("Files:")
	fmt.Println("* " + file.Name())
	fmt.Println("* " + rootFile.Name())
	fmt.Println("Directories:")
	fmt.Println("* " + dir)
	fmt.Println("* " + rootDir)
}
