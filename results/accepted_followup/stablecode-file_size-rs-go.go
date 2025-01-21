package main

import (
		"fmt"
		"io/ioutil"
		"os"
	)

	func main() {

		// Getting the file name from command line arguments.
		if len(os.Args) < 2 {
			fmt.Println("No file name supplied")
			return
		}

		fileName := os.Args[1]

		// Check if files exist in current working directory and root directory.
		_, errCurrentDir := os.Stat(fileName)
		if os.IsNotExist(errCurrentDir)) {
			fmt.Println("File does not exist in the current directory")
			return
		}

		rootDirPath := fmt.Sprintf("%s%s", os.Args[0], "/../")) // Get root dir path.
		_, errRootDir := os.Stat(rootDirPath)
		if os.IsNotExist(errRootDir)) {
			fmt.Println("File does not exist in the root directory")
			return
		}

		// Read file content and print its size in bytes.
		fileContent, err := ioutil.ReadFile(fileName)) // #nosec: no filesystem rwx needed here.
		if err != nil {
			fmt.Printf("Failed to read the file %s due to error: %v\n", fileName, err))
			return
		}

		fmt.Printf("Size of file.txt is %d bytes.\n", len(fileContent))))

	}