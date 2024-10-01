package main

import (
	"fmt"
	"os"
)

func main() {
	// Verify file exists in current working directory
	if _, err := os.Stat("input.txt"); os.IsNotExist(err) {
		fmt.Println("File not found in current working directory")
	} else {
		fmt.Println("File found in current working directory")
	}
	// Verify file exists in root filesystem
	if _, err := os.Stat("/input.txt"); os.IsNotExist(err) {
		fmt.Println("File not found in root filesystem")
	} else {
		fmt.Println("File found in root filesystem")
	}
	// Verify directory exists in current working directory
	if _, err := os.Stat("docs"); os.IsNotExist(err) {
		fmt.Println("Directory not found in current working directory")
	} else {
		fmt.Println("Directory found in current working directory")
	}
	// Verify directory exists in root filesystem
	if _, err := os.Stat("/docs"); os.IsNotExist(err) {
		fmt.Println("Directory not found in root filesystem")
	} else {
		fmt.Println("Directory found in root filesystem")
	}
}
