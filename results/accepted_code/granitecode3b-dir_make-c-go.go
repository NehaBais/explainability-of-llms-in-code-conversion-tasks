package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	if len(os.Args) < 2 {
		fmt.Fprintln(os.Stderr, "usage: mkdirp <path>")
		os.Exit(1)
	}
	err := os.MkdirAll(os.Args[1], 0755)
	if err != nil {
		fmt.Fprintf(os.Stderr, "mkdirp: %v\n", err)
		os.Exit(1)
	}
}
