package main

import (
	"fmt"
	"os"

	"github.com/go4go/fileio"
)

func main() {
	// Define the input and output file paths
	inputFile := "input.txt"
	outputFile := "output.txt"
	docPath := "docs"
	myDocPath := "mydocs"

	// Open the source file in read mode
	sourceFile, err := os.Open(inputFile)
	if err != nil {
		fmt.Println("Error opening input file:", err)
		return
	}
	defer sourceFile.Close()

	// Create the output file in write mode
	outputFile, err = os.Create(outputFile)
	if err != nil {
		fmt.Println("Error creating output file:", err)
		return
	}

	// Copy the contents of the source file to the output file
	_, err = io.Copy(outputFile, sourceFile)
	if err != nil {
		fmt.Println("Error copying input to output file:", err)
		return
	}

	// Close the output file
	outputFile.Close()

	// Move the documents folder
	err = os.Rename(docPath, myDocPath)
	if err != nil {
		fmt.Println("Error moving docs folder:", err)
		return
	}

	// Move the documents folder from root directory
	err = os.Rename(fmt.Sprintf("%c:%s", '/', docPath), fmt.Sprintf("%c:%s", '/', myDocPath))
	if err != nil {
		fmt.Println("Error moving docs folder from root:", err)
		return
	}

	fmt.Println("Files and folders have been moved successfully.")
}
