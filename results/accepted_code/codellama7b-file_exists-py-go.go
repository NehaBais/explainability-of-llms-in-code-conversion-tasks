package main

import (
	"fmt"
	"os"
)

func main() {
	// Verify that a file called input.txt and a directory called docs exist
	// in the current working directory
	if _, err := os.Stat("input.txt"); err != nil {
		fmt.Println(err)
	}
	if _, err := os.Stat("docs"); err != nil {
		fmt.Println(err)
	}

	// Verify that a file called input.txt and a directory called docs exist
	// in the filesystem root
	if _, err := os.Stat("/input.txt"); err != nil {
		fmt.Println(err)
	}
	if _, err := os.Stat("/docs"); err != nil {
		fmt.Println(err)
	}
}
