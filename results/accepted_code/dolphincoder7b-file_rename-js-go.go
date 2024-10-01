package main

import (
	"os"
)

func main() {
	os.Rename("./input.txt", "./output.txt")
	os.Rename("/path/to/input.txt", "/path/to/output.txt")
	os.Rename("docs", "mydocs")
	os.Rename("/path/to/docs", "/path/to/mydocs")
}
