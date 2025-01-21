package main

import (
	"fmt"
	"os"
)

func main() {
	checkFileAndDir(".", "input.txt", "docs")
	checkFileAndDir("/", "input.txt", "/docs")
}

func checkFileAndDir(path, filename, dir string) {
	filePath := fmt.Sprintf("%s/%s", path, dir)
	dirPath := fmt.Sprintf("%s/%s", filePath, filename)

	exists, err := fileExists(filePath)
	if err != nil {
		fmt.Printf("Error checking directory %s: %v\n", filePath, err)
		return
	}
	if exists {
		fmt.Printf("Directory %s exists\n", filePath)
	} else {
		fmt.Printf("Directory %s does not exist\n", filePath)
	}

	exists, err = fileExists(dirPath)
	if err != nil {
		fmt.Printf("Error checking directory %s: %v\n", dirPath, err)
		return
	}
	if exists {
		fmt.Printf("File %s exists\n", dirPath)
	} else {
		fmt.Printf("File %s does not exist\n", dirPath)
	}
}

func fileExists(name string) (bool, error) {
	if _, err := os.Stat(name); err == nil {
		return true, nil
	} else if os.IsNotExist(err) {
		return false, nil
	} else {
		return false, err
	}
}
