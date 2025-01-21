package main

import (
	"fmt"
	"os"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		fmt.Println(err)
	}
	defer file.Close()

	size1 := file.FileInfo() // This does not exist in Go

	file, err = os.Open("/")
	if err != nil {
		fmt.Println(err)
	}
	defer file.Close()

	// size2 := file.FileInfo() // Again this does not exist in Go
	size2 := file.FileInfo().Size() // But you can use FileInfo method to get the actual size of '/'

	fmt.Printf("The size of 'input.txt' is %d bytes\n", size1) // This will not compile in Go because `file.FileInfo()` has no such property
	fmt.Printf("The size of '/' (root directory in your system) is %d bytes\n", size2)
}
