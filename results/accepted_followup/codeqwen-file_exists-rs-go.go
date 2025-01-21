package main

import (
	"fmt"
	"os"
)

func main() {
	dirs := []string{"./", "/"}
	files := []string{"input.txt", "docs"}

	for _, dir := range dirs {
		// Add a trailing slash if it's not already there, to match Rust behaviour
		if dir[len(dir)-1] != '/' {
			dir += "/"
		}

		for _, file := range files {
			fi, err := os.Stat(dir + file)
			if err == nil {
				if fi.IsDir() {
					fmt.Printf("%s%s is a directory\n", dir, file)
				} else {
					fmt.Printf("%s%s is a file\n", dir, file)
				}
			} else if os.IsNotExist(err) {
				fmt.Printf("%s%s does not exist\n", dir, file)
			} else {
				fmt.Printf("Error accessing %s%s: %v\n", dir, file, err)
			}
		}
	}
}
