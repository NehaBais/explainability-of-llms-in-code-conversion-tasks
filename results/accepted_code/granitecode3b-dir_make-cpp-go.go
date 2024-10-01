package main

import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		return
	}
	path := os.Args[1]
	_, err := os.Stat(path)
	if err == nil {
		fmt.Println("directory already exists")
		return
	}
	err = os.MkdirAll(path, 0755)
	if err != nil {
		fmt.Printf("couldn't create directory: %sn", path)
		return
	}
	fmt.Println("created directory:", path)
}
