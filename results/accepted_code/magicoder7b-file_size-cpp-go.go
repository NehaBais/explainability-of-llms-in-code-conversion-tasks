package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

func printFileSize(filename string) {
	size, err := fileSize(filename)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Size of file %s is %d bytes.\n", filename, size)
	}
}

func fileSize(filePath string) (int64, error) {
	info, err := os.Stat(filePath)
	if err != nil {
		return 0, fmt.Errorf("unable to get the file size: %s", err.Error())
	}
	return info.Size(), nil
}

func main() {
	printFileSize(filepath.Join(".", "input.txt"))
	printFileSize("/input.txt")
}
