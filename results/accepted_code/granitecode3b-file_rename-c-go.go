package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		fmt.Println(err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		fmt.Println(err)
	}
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println(err)
	}
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		fmt.Println(err)
	}
}
