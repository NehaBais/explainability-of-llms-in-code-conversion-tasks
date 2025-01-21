package main

import (
	"fmt"
	"os"
)

func handleError(err error) {
	if err != nil {
		fmt.Println("Error:", err)
	}
}

func main() {
	// Create file in current working directory
	file, err := os.Create("output.txt")
	handleError(err)
	file.Close()

	// Create file in root directory
	file, err = os.Create("/output.txt")
	handleError(err)
	file.Close()

	// Create directory in current working directory
	err = os.Mkdir("docs", 0755)
	handleError(err)

	// Create directory in root directory
	err = os.Mkdir("/docs", 0755)
	handleError(err)
}
