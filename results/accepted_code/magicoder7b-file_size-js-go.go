package main

import (
	"fmt"
	"os"
)

func checkFileSize(filePath string) {
	info, err := os.Stat(filePath)
	if err != nil {
		fmt.Printf("Error: %s\n", err)
	} else {
		fmt.Println("Size of the file is: ", info.Size())
	}
}

func main() {
	checkFileSize("input.txt")
	checkFileSize("c:/input.txt")
}
