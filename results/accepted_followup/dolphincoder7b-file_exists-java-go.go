package main

import "os"

func isExists(file *os.File) bool {
	_, err := os.Stat(file.Name())
	return !os.IsNotExist(err)
}

func main() {
	file1, _ := os.Open("docs/input.txt")
	exists1 := isExists(file1)

	println("CWD exists:", exists1)

	file2, _ := os.Open("/docs/input.txt")
	exists2 := isExists(file2)

	println("Root exists:", exists2)

	os.Exit(0)
}
