package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func createFile(path string) {
	_, err := os.Stat(path)
	if os.IsNotExist(err) {
		err = ioutil.WriteFile(path, nil, 0644)
		if err != nil {
			fmt.Printf("Failed to create %s: %v\n", path, err)
		}
	} else if err != nil {
		fmt.Printf("Unexpected error checking %s: %v\n", path, err)
	}
}

func createDirectory(path string) {
	_, err := os.Stat(path)
	if os.IsNotExist(err) {
		err = os.MkdirAll(path, 0755)
		if err != nil {
			fmt.Printf("Failed to create directory %s: %v\n", path, err)
		}
	} else if err != nil {
		fmt.Printf("Unexpected error checking %s: %v\n", path, err)
	}
}

func main() {
	createFile("output.txt")
	createFile("/output.txt") // Assumes we're running in a UNIX-like environment with root access at the filesystem root. In other environments, you might need to use os.Chdir to change working directories or run as an administrator.
	createDirectory("docs")
	createDirectory("/docs") // As above, may require root access.
}
