package main

import (
	"fmt"
	"os"
)

func checkFile(path string) bool {
	fi, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !fi.IsDir()
}
func checkDir(path string) bool {
	fi, err := os.Stat(path)
	if err != nil {
		return false
	}
	return fi.IsDir()
}
func main() {
	fmt.Println("input.txt is a regular file? ", checkFile("input.txt"))
	fmt.Println("docs is a directory? ", checkDir("docs"))
	fmt.Println("/input.txt is a regular file? ", checkFile("/input.txt"))
	fmt.Println("/docs is a directory? ", checkDir("/docs"))
}
