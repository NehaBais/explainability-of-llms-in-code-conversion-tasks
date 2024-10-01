package main

import (
	"os"
	"path/filepath"
)

func main() {
	err := os.MkdirAll("docs", os.ModePerm)
	if err != nil {
		panic(err)
	}
	f, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	defer f.Close()

	err := os.MkdirAll("/docs", os.ModePerm)
	if err != nil {
		panic(err)
	}
	f, err := os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	defer f.Close()
}
