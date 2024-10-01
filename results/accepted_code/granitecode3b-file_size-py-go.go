package main

import (
	"fmt"
	"os"
)

func main() {
	file1, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	size1 := file1.Size()
	fmt.Printf("Size of input.txt: %d bytesn", size1)

	file2, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	size2 := file2.Size()
	fmt.Printf("Size of /input.txt: %d bytesn", size2)
}
