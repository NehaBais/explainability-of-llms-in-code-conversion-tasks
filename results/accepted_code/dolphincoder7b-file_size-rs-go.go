package main

import (
	"fmt"
	"os"
	"syscall"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Println("No file name supplied")
		os.Exit(1)
	}

	file, err := syscall.Stat(os.Args[1])
	if err != nil {
		fmt.Fprintln(os.Stderr, "Error:", err)
		os.Exit(2)
	}

	fmt.Printf("Size of %s is %d bytes\n", os.Args[1], file.Size())
}
