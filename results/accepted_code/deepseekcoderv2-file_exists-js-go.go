package main

import (
	"fmt"
	"os"
)

func main() {
	// Check for input.txt in the current working directory
	_, err := os.Stat("input.txt")
	if os.IsNotExist(err) {
		fmt.Println("input.txt does not exist in the current working directory")
	} else {
		fmt.Println("input.txt exists in the current working directory")
	}

	// Check for input.txt in the filesystem root (assuming Windows path syntax)
	_, err = os.Stat("C:/input.txt")
	if os.IsNotExist(err) {
		fmt.Println("input.txt does not exist in the filesystem root")
	} else {
		fmt.Println("input.txt exists in the filesystem root")
	}

	// Check for docs in the current working directory
	_, err = os.Stat("docs")
	if os.IsNotExist(err) {
		fmt.Println("docs does not exist in the current working directory")
	} else {
		fmt.Println("docs exists in the current working directory")
	}

	// Check for docs in the filesystem root (assuming Windows path syntax)
	_, err = os.Stat("C:/docs")
	if os.IsNotExist(err) {
		fmt.Println("docs does not exist in the filesystem root")
	} else {
		fmt.Println("docs exists in the filesystem root")
	}
}
