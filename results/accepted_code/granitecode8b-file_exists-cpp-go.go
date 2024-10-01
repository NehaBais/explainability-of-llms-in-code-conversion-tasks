package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	fmt.Println(path)
	if _, err := os.Stat(path); !os.IsNotExist(err) {
		if fi, err := os.Stat(path); err == nil {
			if fi.IsDir() {
				fmt.Printf(" is a directoryn")
			} else {
				fmt.Printf(" exists with a file size of %d bytes.n", fi.Size())
			}
		}
	} else {
		fmt.Println(" does not exist")
	}
}
func main() {
	fileExists("./input.txt")
	fileExists("./zero_length.txt")
	fileExists("./docs/input.txt")
	fileExists("./docs/zero_length.txt")
	fileExists("/input.txt")
	fileExists("/zero_length.txt")
	fileExists("/docs/input.txt")
	fileExists("/docs/zero_length.txt")
}
