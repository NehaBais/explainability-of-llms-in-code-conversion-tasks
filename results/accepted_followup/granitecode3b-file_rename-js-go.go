package main

import (
	"os"
	"path/filepath"
)

func main() {
	// Move file to current working directory
	src := filepath.Join("input.txt")
	dest := filepath.Join(".", "output.txt")
	err := os.Rename(src, dest)
	if err != nil {
		println("Error moving file:", err)
	}

	// Move file to root directory
	rootSrc := filepath.Join("/", "input.txt")
	rootDest := filepath.Join("/", "output.txt")
	err = os.Rename(rootSrc, rootDest)
	if err != nil {
		println("Error moving file:", err)
	}

	// Move folder to current working directory
	srcDir := "docs"
	destDir := "mydocs"
	err = os.MkdirAll(destDir, 0755)
	if err != nil {
		println("Error creating directory:", err)
	}
	err = os.Rename(srcDir, destDir)
	if err != nil {
		println("Error moving folder:", err)
	}

	// Move folder to root directory
	rootSrcDir := "/" + srcDir
	rootDestDir := "/" + destDir
	err = os.MkdirAll(rootDestDir, 0755)
	if err != nil {
		println("Error creating directory:", err)
	}
	err = os.Rename(rootSrcDir, rootDestDir)
	if err != nil {
		println("Error moving folder:", err)
	}
}
