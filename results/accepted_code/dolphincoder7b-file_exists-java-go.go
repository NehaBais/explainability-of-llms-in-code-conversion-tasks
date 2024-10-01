package main

import "os"

func main() {
	file1, _ := os.Open("docs/input.txt")
	if file1 != nil && !file1.IsDir() {
		println("CWD exists")
	} else {
		println("CWD doesn't exist")
	}

	file2, _ := os.Open("/docs/input.txt")
	if file2 != nil && !file2.IsDir() {
		println("Root exists")
	} else {
		println("Root doesn't exist")
	}

	os.Exit(0)
}
