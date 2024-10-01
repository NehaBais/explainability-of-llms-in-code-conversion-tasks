package main

import (
	"fmt"
	"os"
)

func checkSize(filePath string) {
	info, err := os.Stat(filePath)
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d\n", info.Size())
}

func main() {
	checkSize("input.txt")
	checkSize("/input.txt")
}
