package main

import (
	"fmt"
	"os"
)

func main() {
	files := []string{"input.txt", "docs", "/input.txt", "/docs"}
	for _, file := range files {
		info, err := os.Stat(file)
		if os.IsNotExist(err) {
			fmt.Printf("%s does not exist\n", file)
		} else if info.IsDir() {
			fmt.Printf("%s is a directory\n", file)
		} else {
			fmt.Printf("%s is a file\n", file)
		}
	}
}
