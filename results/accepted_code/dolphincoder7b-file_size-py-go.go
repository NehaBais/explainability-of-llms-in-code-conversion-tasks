package main

import (
	"fmt"
	"os"
)

func checkSize(filePath string, size *int64) {
	file, err := os.Open(filePath)
	if err != nil {
		panic(err)
	}

	stat, err := file.Stat()
	if err != nil {
		panic(err)
	}

	*size = stat.Size()
}

func main() {
	var size int64
	checkSize("input.txt", &size)
	fmt.Printf("%s: %d bytes\n", "input.txt", size)

	checkSize("/input.txt", &size)
	fmt.Printf("%s: %d bytes\n", "/input.txt", size)
}
