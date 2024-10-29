package main

import (
	"fmt"
	"os"
)

// Check for regular file. 
func checkReg(path string) bool {
	fileInfo, err := os.Stat(path)
	return err == nil && !fileInfo.IsDir()
}

// Check for directory. 
func checkDir(path string) bool {
	fileInfo, err := os.Stat(path)
	return err == nil && fileInfo.IsDir()
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", 
        checkReg("input.txt") ? "yes" : "no")
    fmt.Printf("docs is a directory? %s\n", 
        checkDir("docs") ? "yes" : "no")
	fmt.Printf("/input.txt is a regular file? %s\n", 
        checkReg("/input.txt") ? "yes" : "no")
	fmt.Printf("/docs is a directory? %s\n", 
        checkDir("/docs") ? "yes" : "no")
}