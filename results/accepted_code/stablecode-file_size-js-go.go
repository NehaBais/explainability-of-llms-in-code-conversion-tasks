package main

import (
	"os"
	"path/filepath"
)

func fileSize(filename string) int64 {
	fi, err := os.Stat(filename)
	if err != nil {
		return 0
	}
	return fi.Size()
}

func main() {
	// Current directory
	currentDirFileSize := fileSize("input.txt")
	println("Current Directory File Size: ", currentDirFileSize)

	// Root directory
	rootDirFileSize := fileSize("c:/input.txt")
	println("Root Directory File Size: ", rootDirFileSize)
}
