package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func getFileSize(path string) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		panic(err) // or return err instead of panic
	} else {
		fmt.Println(fileInfo.Size())
	}
}

func main() {
	getFileSize("input.txt")
	// For file in root directory, it depends on the operating system
	if runtimeinfo.GOOS == "windows" {
		getFileSize("C:\\input.txt") // windows style path
	} else {
		getFileSize("/input.txt") // unix-like style path
	}
}
