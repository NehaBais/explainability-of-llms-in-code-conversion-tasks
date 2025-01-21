package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func printFileSize(filename string) {
	fileInfo, err := os.Stat(filename)

	if err != nil {
		fmt.Println("Error occurred:", err)
		return
	}

	size := fileInfo.Size()

	fmt.Printf("Size of file %s is %d bytes.\n", filename, size))
}

func main() {
	printFileSize("input.txt")

	if _, err := os.Stat("/input.txt"); !os.IsNotExist(err) {
		fmt.Println("Error occurred:", err)
		return
	}

	fmt.Printf("Size of file /input.txt is %d bytes.\n", size))
}