package main

import (
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		panic(err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		panic(err)
	}
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		panic(err)
	}
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		panic(err)
	}
}
