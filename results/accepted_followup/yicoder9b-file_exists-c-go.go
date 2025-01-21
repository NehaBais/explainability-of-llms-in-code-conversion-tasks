package main

import (
	"fmt"
	"os"
)

func checkReg(path string) bool {
	fi, err := os.Stat(path)
	if err != nil || !fi.Mode().IsRegular() {
		return false
	}
	return true
}

func checkDir(path string) bool {
	fi, err := os.Stat(path)
	if err != nil || !fi.IsDir() {
		return false
	}
	return true
}

func main() {
	yesNo := "no"
	if checkReg("input.txt") {
		yesNo = "yes"
	}
	fmt.Printf("input.txt is a regular file? %s\n", yesNo)

	yesNo = "no"
	if checkDir("docs") {
		yesNo = "yes"
	}
	fmt.Printf("docs is a directory? %s\n", yesNo)

	yesNo = "no"
	if checkReg("/input.txt") {
		yesNo = "yes"
	}
	fmt.Printf("/input.txt is a regular file? %s\n", yesNo)

	yesNo = "no"
	if checkDir("/docs") {
		yesNo = "yes"
	}
	fmt.Printf("/docs is a directory? %s\n", yesNo)
}
