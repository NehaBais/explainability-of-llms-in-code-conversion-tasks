package main

import (
	"fmt"
	"os"
)

func main() {
	// Check the size of the file in the current working directory
	file1, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of file input.txt in the current working directory is %d bytesn", file1.Size())
	// Check the size of the file in the root directory
	file2, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of file input.txt in the root directory is %d bytesn", file2.Size())
}
