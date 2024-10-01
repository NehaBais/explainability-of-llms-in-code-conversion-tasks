package main

import (
	"fmt"
	"os"
)

func main() {
	for _, path := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		if _, err := os.Stat(path); os.IsNotExist(err) {
			fmt.Printf("%s does not exist\n", path)
		} else if info, _ := os.Stat(path); info.IsDir() {
			fmt.Printf("%s is a directory\n", path)
		} else {
			fmt.Printf("%s is a file\n", path)
		}
	}
}
