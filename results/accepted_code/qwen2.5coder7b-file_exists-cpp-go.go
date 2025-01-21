package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	fmt.Println(path)
	if _, err := os.Stat(path); err == nil {
		fileInfo, _ := os.Stat(path)
		if fileInfo.IsDir() {
			fmt.Println(" is a directory")
		} else {
			fmt.Println(" exists with a file size of ", fileInfo.Size(), " bytes.")
		}
	} else {
		fmt.Println(" does not exist")
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("/docs/input.txt")
	fileExists("/docs/zero_length.txt")
}
