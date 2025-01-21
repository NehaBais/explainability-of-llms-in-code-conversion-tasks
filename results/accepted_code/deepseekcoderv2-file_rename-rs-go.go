package main

import (
	"fmt"
	"os"
)

func main() {
	err := "File move error"
	renameErr := os.Rename("input.txt", "output.txt")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
	renameErr = os.Rename("docs", "mydocs")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
	renameErr = os.Rename("/input.txt", "/output.txt")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
	renameErr = os.Rename("/docs", "/mydocs")
	if renameErr != nil {
		fmt.Println(err, ":", renameErr)
	}
}
