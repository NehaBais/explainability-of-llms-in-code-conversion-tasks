package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Creating "output.txt"
	if err := ioutil.WriteFile("output.txt", []byte{}, 0640); err != nil {
		fmt.Println("Error creating file:", err)
		return
	}

	// Creating "docs" directory
	err := os.MkdirAll("docs", 0750)
	if err != nil {
		fmt.Println("Error creating directory:", err)
		return
	}

	fmt.Println("Files and directories created successfully.")
}
