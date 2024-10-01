package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	_, err := os.Stat(path)
	if err == nil {
		info, err := os.Stat(path)
		if err != nil {
			fmt.Printf("%s does not exist\n", path)
			return
		}
		mode := info.Mode()
		if mode.IsDir() {
			fmt.Printf("%s is a directory\n", path)
		} else if !mode.IsRegular() {
			fmt.Printf("%s exists but is not a regular file or directory\n", path)
		} else {
			fmt.Printf("%s exists with a size of %d bytes.\n", path, info.Size())
		}
		return
	}

	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", path)
		return
	}
}

func main() {
	fileExists("input.txt")
	fileExists("/zero_length.txt") // File in filesystem root
	fileExists("docs/input.txt")
	fileExists("/docs/zero_length.txt") // File in filesystem root
}
