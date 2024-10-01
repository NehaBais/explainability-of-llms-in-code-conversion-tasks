package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkReg(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) || !info.Mode().IsRegular() {
		return false
	}
	return true
}

func checkDir(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) || !info.IsDir() {
		return false
	}
	return true
}

func main() {
	fmt.Printf("input.txt is a regular file in current directory? %s\n", strconv.FormatBool(checkReg("input.txt")))
	fmt.Printf("docs is a directory in current directory? %s\n", strconv.FormatBool(checkDir("docs")))

	root := "/"
	inputFileInRoot := filepath.Join(root, "input.txt")
	docsInRoot := filepath.Join(root, "docs")

	fmt.Printf("%s is a regular file in root? %s\n", inputFileInRoot, strconv.FormatBool(checkReg(inputFileInRoot)))
	fmt.Printf("%s is a directory in root? %s\n", docsInRoot, strconv.FormatBool(checkDir(docsInRoot)))
}
