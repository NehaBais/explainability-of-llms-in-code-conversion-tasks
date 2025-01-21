package main

import (
	"fmt"
	"os"
)

func checkFileSize(filePath string) {
	fileInfo, err := os.Stat(filePath)
	if err != nil {
		fmt.Println("Error occurred:", err)
		return
	}

	size := fileInfo.Size()
	fmt.Printf("Size of file %s: %d bytes\n", filePath, size)
}

func main() {
	checkFileSize("./input.txt")
	checkFileSize("/input.txt")
}
