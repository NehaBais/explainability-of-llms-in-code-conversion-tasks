package main

import (
	"fmt"
	"os"
)

func main() {
	// Check if input.txt exists in current directory
	if _, err := os.Stat("input.txt"); err == nil {
		fmt.Println("input.txt exists")
	} else {
		fmt.Println("input.txt does not exist")
	}
	// Check if /input.txt exists in root of filesystem
	if _, err := os.Stat("/input.txt"); err == nil {
		fmt.Println("/input.txt exists")
	} else {
		fmt.Println("/input.txt does not exist")
	}
	// Check if docs directory exists in current directory
	if _, err := os.Stat("docs"); err == nil {
		fmt.Println("docs directory exists")
	} else {
		fmt.Println("docs directory does not exist")
	}
	// Check if /docs directory exists in root of filesystem
	if _, err := os.Stat("/docs"); err == nil {
		fmt.Println("/docs directory exists")
	} else {
		fmt.Println("/docs directory does not exist")
	}
}
