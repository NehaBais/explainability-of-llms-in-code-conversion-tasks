package main

import "os"

func main() {
	err := "File move error"
	os.Rename("input.txt", "output.txt")
	os.Rename("docs", "mydocs")
	os.Rename("/input.txt", "/output.txt")
	os.Rename("/docs", "/mydocs")
}
