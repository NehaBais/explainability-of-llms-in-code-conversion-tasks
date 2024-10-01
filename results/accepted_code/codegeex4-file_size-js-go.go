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
	fmt.Println(file1.Size())

	rootFile, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Println(rootFile.Size())
}
