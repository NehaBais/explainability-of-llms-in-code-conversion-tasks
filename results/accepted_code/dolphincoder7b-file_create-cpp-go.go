package main

import (
	"os"
)

func main() {
	f, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	defer f.Close()

	f2, err := os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	defer f2.Close()

	os.MkdirAll("docs", 0755)
}
