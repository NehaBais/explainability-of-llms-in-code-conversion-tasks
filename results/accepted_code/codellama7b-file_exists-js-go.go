package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	// Check if input.txt and docs exist in current working directory
	inputFile := filepath.Join(os.Getwd(), "input.txt")
	docsFolder := filepath.Join(os.Getwd(), "docs")

	if _, err := os.Stat(inputFile); err == nil {
		fmt.Println("Input file exists")
	} else if os.IsNotExist(err) {
		fmt.Printf("Input file does not exist: %v\n", err)
	} else {
		fmt.Printf("Error accessing input file: %v\n", err)
	}

	if _, err := os.Stat(docsFolder); err == nil {
		fmt.Println("Docs folder exists")
	} else if os.IsNotExist(err) {
		fmt.Printf("Docs folder does not exist: %v\n", err)
	} else {
		fmt.Printf("Error accessing docs folder: %v\n", err)
	}

	// Check if input.txt and docs exist in filesystem root
	inputFile = filepath.Join(os.Getenv("HOMEDRIVE")+os.Getenv("HOMEPATH"), "input.txt")
	docsFolder = filepath.Join(os.Getenv("HOMEDRIVE")+os.Getenv("HOMEPATH"), "docs")

	if _, err := os.Stat(inputFile); err == nil {
		fmt.Println("Input file exists in filesystem root")
	} else if os.IsNotExist(err) {
		fmt.Printf("Input file does not exist in filesystem root: %v\n", err)
	} else {
		fmt.Printf("Error accessing input file in filesystem root: %v\n", err)
	}

	if _, err := os.Stat(docsFolder); err == nil {
		fmt.Println("Docs folder exists in filesystem root")
	} else if os.IsNotExist(err) {
		fmt.Printf("Docs folder does not exist in filesystem root: %v\n", err)
	} else {
		fmt.Printf("Error accessing docs folder in filesystem root: %v\n", err)
	}
}
