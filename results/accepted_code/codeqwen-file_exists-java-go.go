package main

import (
	"fmt"
	"io/ioutil"
	"log"
)

func main() {
	// Check current working directory
	dir, err := ioutil.ReadDir(".")
	if err != nil {
		log.Fatal(err)
	} else {
		for _, d := range dir {
			if d.Name() == "docs" {
				fileInfo, err := os.Stat("docs/input.txt")
				if err == nil && !fileInfo.IsDir() {
					fmt.Println("File input.txt exists in the current directory.")
				} else {
					fmt.Println("File input.txt does not exist in the current directory.")
				}
			}
		}
	}

	// Check root filesystem
	fileInfo, err := os.Stat("/docs/input.txt")
	if err == nil && !fileInfo.IsDir() {
		fmt.Println("File input.txt exists in the root directory.")
	} else {
		fmt.Println("File input.txt does not exist in the root directory.")
	}
}
