package main

import (
	"fmt"
	"os"
)

func main() {
	fileInfo, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("%d\n", fileInfo.Size())

	rootFileInfo, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("%d\n", rootFileInfo.Size())
}
