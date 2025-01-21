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
	infoA, err := fileA.Stat()
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d Bn", infoA.Size())
	fileB, err := os.Open("/file.txt")
	if err != nil {
		panic(err)
	}
	defer fileB.Close()
	infoB, err := fileB.Stat()
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d Bn", infoB.Size())
}
