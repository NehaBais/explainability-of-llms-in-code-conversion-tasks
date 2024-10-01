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
	// Rename in the filesystem root
	err = os.Rename(string(os.PathSeparator)+"input.txt", string(os.PathSeparator)+"output.txt")
	if err != nil {
		fmt.Println(err)
	}
	err = os.Rename(string(os.PathSeparator)+"docs", string(os.PathSeparator)+"mydocs")
	if err != nil {
		fmt.Println(err)
	}
}
