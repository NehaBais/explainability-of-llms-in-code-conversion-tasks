package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func checkFile(filename string) {
	info, err := os.Stat(filename)
	if err != nil {
		fmt.Println("Error occurred: ", err)
		return
	}
	if info == nil {
		fmt.Printf("%s does not exist\n", filename)
		return
	}
	if !info.IsDir() {
		fmt.Printf("%s is a file, not a directory\n", filename)
	} else {
		fmt.Printf("%s is a directory\n", filename)
	}
}

func main() {
	dirPath := "./"             // current working directory
	dirFilePath := "/input.txt" // root filesystem

	checkFile(filepath.Join(dirPath, "input.txt"))
	checkFile(dirFilePath)

	checkDir := "./docs"
	dirFileDirPath := "/docs"

	info, err := os.Stat(checkDir)
	if err != nil {
		fmt.Println("Error occurred: ", err)
		return
	}
	if info == nil {
		fmt.Printf("%s does not exist\n", checkDir)
		return
	}
	if !info.IsDir() {
		fmt.Printf("%s is a file, not a directory\n", checkDir)
	} else {
		fmt.Printf("%s is a directory\n", checkDir)
	}

	info, err = os.Stat(dirFileDirPath)
	if err != nil {
		fmt.Println("Error occurred: ", err)
		return
	}
	if info == nil {
		fmt.Printf("%s does not exist\n", dirFileDirPath)
		return
	}
	if !info.IsDir() {
		fmt.Printf("%s Is a file, not a directory\n", dirFileDirPath)
	} else {
		fmt.Printf("%s is a directory\n", dirFileDirPath)
	}
}
