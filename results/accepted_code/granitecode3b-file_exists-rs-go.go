package main

import (
	"fmt"
	"os"
)

func main() {
	for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		info, err := os.Stat(file)
		if err != nil {
			fmt.Println(err)
			continue
		}
		switch mode := info.Mode(); {
		case mode.IsDir():
			fmt.Printf("%s is a directoryn", file)
		default:
			fmt.Printf("%s is a filen", file)
		}
	}
}
