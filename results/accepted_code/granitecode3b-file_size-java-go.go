package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Open("file.txt")
	if err != nil {
		panic(err)
	}
	defer fileA.Close()
	statA, err := fileA.Stat()
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d B%n", statA.Size())
	fileB, err := os.Open("/file.txt")
	if err != nil {
		panic(err)
	}
	defer fileB.Close()
	statB, err := fileB.Stat()
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d B%n", statB.Size())
}
