package main

import (
	"io/ioutil"
	"os"
	"path/filepath"
)

func main() {
	var err error

	// Move file in current directory.
	inputFile := "input.txt"
	outputFile := "output.txt"
	if _, err = os.Stat(inputFile); !os.IsNotExist(err) {
		err = os.Rename(inputFile, outputFile)
		if err != nil {
			panic(err)
		}
	} else {
		println("No file input.txt found.")
	}

	// Move file in filesystem root.
	inputFileRoot := "/" + inputFile // Using Unix-style path separators for this example, adapt as needed.
	outputFileRoot := "/" + outputFile
	if _, err = os.Stat(inputFileRoot); !os.IsNotExist(err) {
		err = os.Rename(inputFileRoot, outputFileRoot)
		if err != nil {
			panic(err)
		}
	} else {
		println("No file in root directory found.")
	}

	// Move folder in current directory.
	inputDir := "docs"
	outputDir := "mydocs"
	if _, err = os.Stat(inputDir); !os.IsNotExist(err) {
		err = os.Rename(inputDir, outputDir)
		if err != nil {
			panic(err)
		}
	} else {
		println("No directory docs found.")
	}

	// Move folder in filesystem root.
	inputDirRoot := "/" + inputDir // Using Unix-style path separators for this example, adapt as needed.
	outputDirRoot := "/" + outputDir
	if _, err = os.Stat(inputDirRoot); !os.IsNotExist(err) {
		err = os.Rename(inputDirRoot, outputDirRoot)
		if err != nil {
			panic(err)
		}
	} else {
		println("No directory in root directory found.")
	}
}
