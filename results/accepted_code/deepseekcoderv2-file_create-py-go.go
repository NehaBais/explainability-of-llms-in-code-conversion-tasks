package main

import (
	"os"
)

func createFileAndDirectory(directory string) error {
	// Create an empty file called "output.txt" in the specified directory
	file, err := os.Create(directory + "/output.txt")
	if err != nil {
		return err
	}
	file.Close()

	// Create an empty directory called "docs" in the specified directory
	err = os.Mkdir(directory+"/docs", 0755)
	if err != nil {
		return err
	}

	return nil
}

func main() {
	// Create files and directories in the current working directory
	err := createFileAndDirectory(".")
	if err != nil {
		fmt.Println("Error creating file and directory in current directory:", err)
	} else {
		fmt.Println("Successfully created file and directory in current directory")
	}

	// Create files and directories in the root directory
	err = createFileAndDirectory("/")
	if err != nil {
		fmt.Println("Error creating file and directory in root directory:", err)
	} else {
		fmt.Println("Successfully created file and directory in root directory")
	}
}
