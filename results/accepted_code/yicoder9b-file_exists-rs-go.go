package main

import (
	"fmt"
	"os"
)

func main() {
	for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		if _, err := os.Stat(file); err != nil {
			fmt.Printf("%s does not exist\n", file)
		} else {
			fi, err := os.Stat(file)
			if err != nil {
				panic(err)
			}
			if fi.IsDir() {
				fmt.Printf("%s is a directory\n", file)
			} else {
				fmt.Printf("%s is a file\n", file)
			}
		}
	}
}
