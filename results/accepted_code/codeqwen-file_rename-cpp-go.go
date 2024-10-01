package main

import (
	"fmt"
	"os"
)

func main() {
	// Here directory
	err1 := os.Rename("input.txt", "output.txt")
	if err1 != nil {
		fmt.Println(err1)
	} else {
		fmt.Println("File input.txt has been renamed to output.txt successfully.")
	}

	err2 := os.Rename("docs", "mydocs")
	if err2 != nil {
		fmt.Println(err2)
	} else {
		fmt.Println("Directory docs has been renamed to mydocs successfully.")
	}

	// Root directory
	err3 := os.Rename("/input.txt", "/output.txt")
	if err3 != nil {
		fmt.Println(err3)
	} else {
		fmt.Println("File /input.txt has been renamed to /output.txt successfully.")
	}

	err4 := os.Rename("/docs", "/mydocs")
	if err4 != nil {
		fmt.Println(err4)
	} else {
		fmt.Println("Directory /docs has been renamed to /mydocs successfully.")
	}
}
