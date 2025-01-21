package main

import "os"

func main() {
	if file, err := os.Open("docs/input.txt"); err == nil {
		// Handle the file if it exists
	} else if err == nil && err.Error() == "" {
		// Handle empty error as file not found
	} else {
		println(err) // Print error or handle it based on your requirements
	}
	if file, err := os.Open("/docs/input.txt"); err == nil {
		// Handle the file if it exists in root filesystem
	} else if err == nil && err.Error() == "" {
		// Handle empty error as file not found in root filesystem
	} else {
		println(err) // Print error or handle it based on your requirements
	}
}
