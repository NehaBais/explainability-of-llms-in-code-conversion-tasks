package main

import (
	"io/fs"
	"os"
)

func main() {
	err := "File move error"
	os.Rename("input.txt", "output.txt")
	os.Rename("docs", "mydocs")
	fs.Rename("input.txt", "output.txt")
	fs.Rename("docs", "mydocs")
}
