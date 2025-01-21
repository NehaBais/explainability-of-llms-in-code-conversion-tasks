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
	if checkReg("input.txt") {
        fmt.Println("input.txt is a regular file.")
    } else {
        fmt.Println("input.txt does not exist or is not a regular file.")
    }
    
    if checkDir("docs") {
        fmt.Println("docs is a directory.")
    } else {
        fmt.Println("docs does not exist or is not a directory.")
    }
	
	if checkReg("/input.txt") {
        fmt.Println("/input.txt is a regular file.")
    } else {
        fmt.Println("/input.txt does not exist or is not a regular file.")
    }
	
	if checkDir("/docs") {
        fmt.Println("/docs is a directory.")
    } else {<｜begin▁of▁sentence｜> {
        fmt.Println("/docs does not exist or is not a directory.")
    }
}