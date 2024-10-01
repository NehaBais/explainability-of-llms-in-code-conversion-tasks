package main

import (
	"fmt"
	"os"
	"syscall"
)

func main() {
	filename := "./input.txt"
	fileInfo, err := os.Stat(filename)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Println("Size of input.txt:", fileInfo.Size())
	filename = "/" + filename
	fileInfo, err = os.Stat(filename)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Println("Size of /input.txt:", fileInfo.Size())
}
