package main

import (
	"fmt"
	"log"
	"os"
)

func FileExists(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) {
		return false
	} else if err != nil {
		log.Fatal("Error checking for file: ", err)
	}
	return !info.Mode().IsDir()
}

func DirExists(path string) bool {
	info, err := os.Stat(path)
	if os.IsNotExist(err) {
		return false
	} else if err != nil {
		log.Fatal("Error checking for directory: ", err)
	}
	return info.Mode().IsDir()
}

func main() {
	fmt.Println("Checking current working dir:")
	FileExists("./input.txt")
	DirExists("./docs")

	fmt.Println("\nChecking root of the filesystem:")
	FileExists("/input.txt")
	DirExists("/docs")
}
