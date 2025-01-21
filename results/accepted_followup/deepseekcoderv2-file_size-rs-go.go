package main

import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Fprintln(os.Stderr, "Error: No file name supplied")
		os.Exit(1)
	}

	file := os.Args[1]
	info, err := os.Stat(file)
	if err != nil {
		fatal("Could not get file info", err)
	}

	fmt.Printf("Size of %s is %d bytes\n", file, info.Size())
}

func fatal(msg string, err error) {
	fmt.Fprintf(os.Stderr, "Error: %s: %v\n", msg, err)
	os.Exit(2)
}
