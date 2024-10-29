package main

import (
	"fmt"
	"os"
)

func checkFile(file string) {
	_, err := os.Stat(file)
	if os.IsNotExist(err) {
		fmt.Println("File does not exist:", file)
	} else {
		fmt.Println("File exists:", file)
	}
}

func main() {
	// Current working directory
	checkFile("./docs/input.txt") // replace "." with the path of your own current work directory if necessary

	// File and directory in filesystem root ("/" is equivalent to "\ on windows")
	checkFile("/docs/input.txt")
}
