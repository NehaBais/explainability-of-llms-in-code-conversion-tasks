package main

import (
	"fmt"
	"os"
)

func main() {
	// Rename file/directory within current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("File successfully renamed.")
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory successfully renamed.")
	}

	// Rename file/directory within the filesystem root
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("File successfully renamed in root directory.")
	}

	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory successfully renamed in root directory.")
	}
}
