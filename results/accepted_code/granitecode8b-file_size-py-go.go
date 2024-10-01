package main

import (
	"fmt"
	"os"
)

func main() {
	// Get the size of a file called input.txt in the current working directory
	fi, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt in current working directory: %d bytesn", fi.Size())
	// Get the size of a file called input.txt in the root file system
	fi, err = os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt in root file system: %d bytesn", fi.Size())
}
