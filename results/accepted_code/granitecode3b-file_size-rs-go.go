package main

import (
	"fmt"
	"io/fs"
	"os"
)

func main() {
	file_name := os.Args[1]
	metadata, err := fs.Stat(file_name)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of %s is %d bytes\n", file_name, metadata.Size())
}
