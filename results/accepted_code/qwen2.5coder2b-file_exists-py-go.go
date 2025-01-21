package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func checkFile(dir, file string) bool {
	var err error
	if _, err = ioutil.ReadFile(fmt.Sprintf("%s/%s", dir, file)); os.IsNotExist(err) {
		return false
	}
	return true
}

func main() {
	currentDir := "."
	rootDir := "/"

	fmt.Println("Current directory:")
	if checkFile(currentDir, "input.txt") && checkFile(rootDir, "input.txt") {
		fmt.Println("Both files exist.")
	} else {
		fmt.Println("One or both file does not exist.")
	}

	fmt.Println("\nRoot directory:")
	if checkFile(rootDir, "docs") && checkFile(rootDir, "docs/") { // Directory is treated as a file here
		fmt.Println("Both directories exist.")
	} else {
		fmt.Println("One or both directories do not exist.")
	}
}
