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

	fmt.Printf("%,d B%n", fileA.Size()))
	
	fileB, err := os.Stat("/file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("%,d B%n", fileB.Size()))
}