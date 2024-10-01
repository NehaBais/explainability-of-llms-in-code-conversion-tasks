package main

import (
	"fmt"
	"io/fs"
	"os"
)

func main() {
	// Create an empty file called "output.txt" in the current working directory and in the filesystem root
	f, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	defer f.Close()
	if _, err := f.Write([]byte{}); err != nil {
		panic(err)
	}
	// Create an empty directory called "docs" in the current working directory and in the filesystem root
	if err := os.Mkdir("docs", 0755); err != nil {
		panic(err)
	}
	// Open the filesystem root to create the directories in it
	if fsRoot, err := fs.Open("/"); err == nil {
		defer fsRoot.Close()
		if _, err := os.Stat("/output.txt"); !os.IsNotExist(err) {
			fmt.Println("File already exists at /output.txt")
		} else if err = os.WriteFile("/output.txt", []byte{}, 0644); err != nil {
			panic(err)
		}
		if _, err := fsRoot.Stat("docs"); !os.IsNotExist(err) {
			fmt.Println("Directory already exists at /docs")
		} else if err = os.MkdirAll("/docs", 0755); err != nil {
			panic(err)
		}
	} else {
		panic(err)
	}
}
