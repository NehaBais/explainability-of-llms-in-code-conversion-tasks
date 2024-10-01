package main

import (
	"fmt"
	"os"
)

func main() {
	for _, file := range []string{"input.txt", "docs", "/", "input.txt", "/docs"} {
		if file == "/" || file == "" {
			continue
		}
		info, err := os.Stat(file)
		if err != nil && os.IsNotExist(err) {
			fmt.Printf("%s does not exist\n", file)
		} else if info.IsDir() {
			fmt.Printf("%s is a directory\n", file)
		} else {
			fmt.Printf("%s is a file\n", file)
		}
	}
}
