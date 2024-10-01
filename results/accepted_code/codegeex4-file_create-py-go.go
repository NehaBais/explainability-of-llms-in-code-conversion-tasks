package main

import (
	"os"
)

func create(directory string) {
	file, _ := os.Create(directory + "/output.txt")
	defer file.Close()

	err := os.MkdirAll(directory+"/docs", 0755)
	if err != nil {
		panic(err)
	}
}

func main() {
	create(".") // current directory
	create("/") // root directory (requires appropriate permissions)
}
