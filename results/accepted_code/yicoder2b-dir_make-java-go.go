package main

import "os"

func main() {
	err := createDir("C:/parent/test")
	if err != nil {
		println("Error creating directory:", err.Error())
	} else {
		println("Directory created successfully")
	}
}

// Function to create directories recursively
func createDir(path string) (err error) {
	return os.MkdirAll(path, 0755)
}
