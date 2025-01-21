package main

import (
	"fmt"
	"os"
)

func checkFile(filePath string) {
	exists := false

	if _, err := os.Stat(filePath); !os.IsNotExist(err) {
		exists = true
	}
	fmt.Printf("The file %s exists: %t\n", filePath, exists)
}

func checkDirectory(dirPath string) {
	exists := false

	info, err := os.Stat(dirPath)
	if !os.IsNotExist(err) && info.IsDir() {
		exists = true
	}
	fmt.Printf("The directory %s exists: %t\n", dirPath, exists)
}

func main() {
	checkFile("./input.txt")
	checkFile("/input.txt")

	checkDirectory("./docs")
	checkDirectory("/docs")
}
