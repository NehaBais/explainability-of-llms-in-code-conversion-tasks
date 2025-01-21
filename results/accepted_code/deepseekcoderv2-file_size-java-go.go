package main

import (
	"fmt"
	"os"
)

func main() {
	fileA := "file.txt"
	infoA, err := os.Stat(fileA)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("%,d B\n", infoA.Size())

	fileB := "/file.txt"
	infoB, err := os.Stat(fileB)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("%,d B\n", infoB.Size())
}
