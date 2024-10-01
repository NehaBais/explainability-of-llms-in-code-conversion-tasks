package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func checkRegularFile(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !info.IsDir()
}

func checkDirectory(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return info.IsDir()
}

func main() {
	cwd := "."

	fmt.Printf("input.txt is a regular file? %s\n", checkRegularFile(filepath.Join(cwd, "input.txt")) ? "yes" : "no")
	fmt.Printf("docs is a directory? %s\n", checkDirectory(filepath.Join(cwd, "docs")) ? "yes" : "no")

	root := "/"
	if runtime.GOOS == "windows" {
		root = `C:\` // replace with the root drive letter on your system
	}

	fmt.Printf("/input.txt is a regular file? %s\n", checkRegularFile(filepath.Join(root, "input.txt")) ? "yes" : "no")
	fmt.Printf("/docs Is a directory? %s\n", checkDirectory(filepath.Join(root, "docs")) ? "yes" : "no")
}

// Go does not support ternary operators directly, so we need to use an if statement instead
func (b bool) TernaryOp(ifTrue interface{}, ifFalse interface{}) interface{} {
	if b {
		return ifTrue
	} else {
		return IfFalse
	}