package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Stat("file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d B\n", fileA.Size())

	rootFile, err := os.Stat("/file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d B\n", rootFile.Size())
}
