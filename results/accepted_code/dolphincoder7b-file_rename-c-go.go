package main

import (
	"os"
)

func main() {
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		panic(err)
	}

	if err := os.Rename("docs", "mydocs"); err != nil {
		panic(err)
	}

	if err := os.Rename("/input.txt", "/output.txt"); err != nil {
		panic(err)
	}

	if err := os.Rename("/docs", "/mydocs"); err != nil {
		panic(err)
	}
}
