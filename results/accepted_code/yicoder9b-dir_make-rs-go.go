package main

import (
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0750)
	if err != nil {
		panic(err) // Panic in case of any error
	}
}
