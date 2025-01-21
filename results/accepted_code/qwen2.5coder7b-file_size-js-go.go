package main

import (
	"fmt"
	"os"
)

func getFileSize(filePath string) (int64, error) {
	fileInfo, err := os.Stat(filePath)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}

func main() {
	currentDir, _ := os.Getwd()
	inputFilePath1 := currentDir + "/input.txt"
	inputFilePath2 := "c:/input.txt"

	size1, err := getFileSize(inputFilePath1)
	if err != nil {
		fmt.Println("Error getting size of file:", inputFilePath1)
	} else {
		fmt.Printf("Size of %s is %d bytes\n", inputFilePath1, size1)
	}

	size2, err := getFileSize(inputFilePath2)
	if err != nil {
		fmt.Println("Error getting size of file:", inputFilePath2)
	} else {
		fmt.Printf("Size of %s is %d bytes\n", inputFilePath2, size2)
	}
}
