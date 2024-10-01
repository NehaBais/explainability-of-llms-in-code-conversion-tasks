package main

import (
	"fmt"
	"os"
)

func main() {
	path := "./parent/test"

	err := os.MkdirAll(path, os.ModePerm)
	if err != nil {
		fmt.Println("An error occurred:", err)
	} else {
		fmt.Println("path successfully created")
	}
}
