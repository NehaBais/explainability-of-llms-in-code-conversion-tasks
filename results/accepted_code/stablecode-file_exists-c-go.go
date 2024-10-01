package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

// checkRegular checks if a file is a regular file.
func checkRegular(path string) bool {
	stat, err := os.Stat(path)
	if err != nil {
		return false
	}

	return stat.Mode().IsRegular()
}

// checkDirectory checks if a path is a directory.
func checkDirectory(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}

	return fileInfo.Mode().IsDir()
}

func main() {
	currentWorkingDir := "./"
	inputFnameInRootDir := "/input.txt"
	
	// check for existence in current working directory
	fmt.Printf("Does '%s' exist? Answer: %v\n", filepath.Join(currentWorkingDir, "input.txt") , checkRegular(filepath.Join(currentWorkingDir, "input.txt"))))

	// check for existence in filesystem root directory
	fmt.Printf("Does '%s' exist? Answer: %v\n", inputFnameInRootDir, checkDirectory(inputFnameInRootDir)))
}