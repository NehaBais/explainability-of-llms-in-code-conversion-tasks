package main

import (
	"fmt"
	"os"
)

func checkFileOrDirectory(path string) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		fmt.Printf("%s does not exist\n", path)
		return
	}

	if fileInfo.IsDir() {
		fmt.Printf("%s is a directory\n", path)
	} else {
		fmt.Printf("%s is a file\n", path)
	}
}

func main() {
	filesAndDirectories := []string{"input.txt", "docs", "/input.txt", "/docs"}
	for _, fileOrDirectory := range filesAndDirectories {
		checkFileOrDirectory(fileOrDirectory)
	}
}
