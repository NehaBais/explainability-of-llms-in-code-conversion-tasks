package main

import (
	"io/fs"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		return // Handle the error
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		return // Handle the error
	}
	err = fs.Rename("/input.txt", "/output.txt")
	if err != nil {
		return // Handle the error
	}
	err = fs.Rename("/docs", "/mydocs")
	if err != nil {
		return // Handle the error
	}
}
