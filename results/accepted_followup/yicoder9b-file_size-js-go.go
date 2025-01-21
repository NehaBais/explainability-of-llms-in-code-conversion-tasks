package main

import (
	"fmt"
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
	if runtime.GOOS == "windows" { // import 'runtime' package to use this constant
		getFileSize("C:\\input.txt")
	} else {
		getFileSize("/input.txt")
	}
}
