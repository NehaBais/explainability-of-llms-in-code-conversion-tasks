package main

import (
	"fmt"
	"os"
)

func main() {
	// Create an empty file "output.txt" in the current working directory
	file, err := os.Create("./output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	// Create an empty directory "docs" in the current working directory
	err = os.Mkdir("./docs", 0755)
	if err != nil {
		fmt.Println(err)
		return
	}

	// Create an empty file "output.txt" in the root directory
	file, err = os.Create("/output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	// Create an empty directory "docs" in the root directory
	err = os.Mkdir("/docs", 0755)
	if err != nil {
		fmt.Println(err)
		return
	}
}
