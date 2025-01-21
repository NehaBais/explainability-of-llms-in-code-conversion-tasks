package main

import (
	"fmt"
	"os"
)

func main() {
	// Check file size of 'input.txt' in the current directory
	info, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt: %d bytes\n", info.Size())

	// Check file size of 'c:/input.txt' in the root directory
	info, err = os.Stat("C:/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of c:/input.txt: %d bytes\n", info.Size())
}
