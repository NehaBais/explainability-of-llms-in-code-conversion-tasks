package main

import (
	"fmt"
	"os"
)

// Check if a file exists and is a regular file.
func checkReg(path string) bool {
	info, err := os.Stat(path)
	return err == nil && info.Mode().IsRegular()
}

// Check if a file exists and is a directory.
func checkDir(path string) bool {
	info, err := os.Stat(path)
	return err == nil && info.Mode().IsDir()
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", yesNo(checkReg("input.txt")))
	fmt.Printf("docs is a directory? %s\n", yesNo(checkDir("docs")))
	fmt.Printf("/input.txt is a regular file? %s\n", yesNo(checkReg("/input.txt")))
	fmt.Printf("/docs is a directory? %s\n", yesNo(checkDir("/docs")))
}

// Helper function to convert boolean result to "yes" or "no".
func yesNo(b bool) string {
	if b {
		return "yes"
	}
	return "no"
}
