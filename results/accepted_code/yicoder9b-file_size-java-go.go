package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	infoA, err := os.Stat("input.txt")
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d B\n", infoA.Size())

	infoB, err := os.Stat(filepath.Join("/", "input.txt"))
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d B\n", infoB.Size())
}
