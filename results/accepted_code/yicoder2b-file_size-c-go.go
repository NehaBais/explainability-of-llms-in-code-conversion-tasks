package main

import (
	"fmt"
	"os"
)

func main() {
	file, err := os.Stat("input.txt")
	if err != nil {
		panic(err)
	}
	fmt.Println(file.Size())

	file, _ = os.Stat("/input.txt")
	fmt.Println(file.Size())
}
