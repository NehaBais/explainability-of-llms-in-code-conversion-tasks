package main

import (
	"fmt"
	"os"
)

func main() {
	fileInfoA, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("%d B\n", fileInfoA.Size())
	}

	fileInfoB, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("%d B\n", fileInfoB.Size())
	}
}
