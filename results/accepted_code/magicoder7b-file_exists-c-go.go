package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkReg(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !info.IsDir() && (info.Mode().Perm()&0100 == 0100)
}

func checkDir(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return info.IsDir() && (info.Mode().Perm()&0400 == 0400)
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", checkReg("input.txt"))
	fmt.Printf("/input.txt is a regular file? %s\n", checkReg(filepath.Join("/", "input.txt")))

	fmt.Printf("docs is a directory? %s\n", checkDir("docs"))
	fmt.Printf("/docs is a directory? %s\n", checkDir(filepath.Join("/", "docs")))
}
