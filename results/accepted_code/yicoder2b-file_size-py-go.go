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

	size1 := file.FileInfo().Size()
	fmt.Printf("The size of 'input.txt' is %d bytes\n", size1)

	file, err := os.Open("/")
	if err != nil {
		fmt.Println(err)
	}
	defer file.Close()

	size2 := file.FileInfo().Size()
	fmt.Printf("The size of '/' (root directory in your system) is %d bytes\n", size2)
}
