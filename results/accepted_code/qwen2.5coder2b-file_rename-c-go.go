package main

import (
	"fmt"
)

func main() {
	// Rename "input.txt" to "output.txt" in the current working directory and root filesystem
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		fmt.Println(err)
		return
	}

	if err := os.Rename("docs", "mydocs"); err != nil {
		fmt.Println(err)
		return
	}

	if err := os.Rename("/input.txt", "/output.txt"); err != nil {
		fmt.Println(err)
		return
	}

	if err := os.Rename("/docs", "/mydocs"); err != nil {
		fmt.Println(err)
		return
	}

	fmt.Println("Files and directories renamed successfully.")
}
