package main

import (
	"fmt"
	"os"
)

func main() {
	// Create an empty file called "output.txt" in the current working directory
	file, err := os.Create("output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()
	// Create an empty directory called "docs" in the current working directory
	err = os.Mkdir("docs", 0750)
	if err != nil {
		fmt.Println(err)
		return
	}
	// Create an empty file called "output.txt" in the filesystem root
	file, err = os.OpenFile("/output.txt", os.O_WRONLY|os.O_CREAT|os.O_TRUNC, 0640)
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()
	// Create an empty directory called "docs" in the filesystem root
	err = os.Mkdir("/docs", 0750)
	if err != nil {
		fmt.Println(err)
		return
	}
}
