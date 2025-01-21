package main

import (
		"os"
		"path/filepath"
	)

func renameFile(src, dest string) 
{
	_, err := os.Stat(dest)
	if err == nil {
			return
		}

		err = os.Rename(src, dest)
		if err != nil {
			// Handle error
			panic(err)
		}
}

func renameDirectory(src, dest string) 
{
	_, err := os.Stat(dest)
	if err == nil {
		return
	}

	err = os.Rename(src, dest)
	if err != nil {
		// Handle error
		panic(err)
	}
}

func main() 
{
	// Rename input.txt to output.txt
	renameFile("input.txt", "output.txt")

	// Rename docs directory to mydocs
	renameDirectory("docs", "mydocs")

	// Repeat the process for root directory
	rootDir := filepath.Join(os.Getenv("SYSTEMDRIVE"),"docs"))
	renameFile(filepath.Join(os.Getenv("SYSTEMDRIVE"),"input.txt"), filepath.Join(os.Getenv("SYSTEMDRIVE"),"output.txt"))
	renameDirectory(rootDir, filepath.Join(os.Getenv("SYSTEMDRIVE"),"mydocs")
}