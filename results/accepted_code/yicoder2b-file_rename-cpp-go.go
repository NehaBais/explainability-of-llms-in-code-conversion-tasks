package main

import (
	"os"
)

func main() {
	// Rename file "input.txt" to "output.txt" in current working directory.
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		println("Error occurred while renaming input.txt to output.txt: ", err.Error())
		return
	}

	// Rename directory "docs" to "mydocs" in current working directory.
	err = os.Rename("docs", "mydocs")
	if err != nil {
		println("Error occurred while renaming docs to mydocs: ", err.Error())
		return
	}

	// Rename file "/input.txt" to "/output.txt" in root directory.
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		println("Error occurred while renaming /input.txt to /output.txt: ", err.Error())
		return
	}

	// Rename directory "/docs" to "/mydocs" in root directory.
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		println("Error occurred while renaming /docs to /mydocs: ", err.Error())
		return
	}
}
