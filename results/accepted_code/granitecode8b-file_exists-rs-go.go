package main

import (
	"fmt"
	"os"
)

func main() {
	for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		if fi, err := os.Stat(file); err != nil {
			fmt.Printf("%s does not existn", file)
		} else if fi.IsDir() {
			fmt.Printf("%s is a directoryn", file)
		} else {
			fmt.Printf("%s is a filen", file)
		}
	}
}
