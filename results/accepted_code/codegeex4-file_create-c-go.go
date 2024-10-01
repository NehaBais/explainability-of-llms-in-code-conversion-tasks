package main

import (
	"os"
)

func main() {
	err := os.MkdirAll("/docs", 0750)
	if err != nil {
		panic(err)
	}

	f, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	defer f.Close()

	// The file is now created and empty. You can write to it using the Write method.

	// To create empty files and directories in root filesystem
	os.MkdirAll("/root/docs", 0750)
	os.Create("/root/output.txt")
}
