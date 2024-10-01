package main

import (
	"fmt"
	"os"
)

func main() {
	fi, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt: %d bytesn", fi.Size())

	fi2, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of /input.txt: %d bytesn", fi2.Size())
}
