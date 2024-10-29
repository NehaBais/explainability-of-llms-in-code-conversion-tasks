package main

import (
	"fmt"
	"os"
)

func Rename(oldpath, newpath string) {
	if err := os.Rename(oldpath, newpath); err != nil {
		fmt.Println(err)
	}
}

func main() {
	// Current working directory rename
	Rename("input.txt", "output.txt")
	Rename("docs", "mydocs")

	// File system root path - Not supported in Golang by design
	/*Rename("/input.txt", "/output.txt")
	  Rename("/docs", "/mydocs")*/
}
