package main

import (
	"fmt"
	"os"
)

func create(directory string) {
	file, err := os.Create(directory + "/output.txt")
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		defer file.Close()
	}
	_ = os.MkdirAll(directory+"/docs", 0755)
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
