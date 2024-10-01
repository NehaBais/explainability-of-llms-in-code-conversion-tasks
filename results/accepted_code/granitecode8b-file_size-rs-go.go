package main

import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Println("Usage: ", os.Args[0], " <filename>")
		return
	}
	fileName := os.Args[1]
	fileInfo, err := os.Stat(fileName)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of %s is %d bytesn", fileName, fileInfo.Size())
}
