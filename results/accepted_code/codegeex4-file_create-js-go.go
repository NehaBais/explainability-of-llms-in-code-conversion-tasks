package main

import (
	"os"
)

func check(e error) {
	if e != nil {
		panic(e)
	}
}

func main() {
	// Create in current directory
	file, err := os.Create("output.txt")
	check(err)
	defer file.Close()

	dirErr := os.Mkdir("docs", 0755)
	check(dirErr)

	// Create in root directory
	file, err = os.OpenFile("/output.txt", os.O_WRONLY|os.O_CREATE, 0666)
	check(err)
	defer file.Close()

	dirErr = os.MkdirAll("/docs", 0755)
	check(dirErr)
}
