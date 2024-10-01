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
	fmt.Printf("%d Bn", fileA.Stat().Size())
	fileB, err := os.Open("/file.txt")
	if err != nil {
		panic(err)
	}
	defer fileB.Close()
	fmt.Printf("%d Bn", fileB.Stat().Size())
}
