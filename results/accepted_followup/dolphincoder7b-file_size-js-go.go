package main

import (
	"fmt"
	"os"
	_ "path/filepath" // Imported but not used
)

func checkFile(filename string) {
	info, err := os.Stat(filename)
	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", filename)
	} else if err != nil {
		fmt.Println("Error:", err)
	} else {
		sizeInBytes := info.Size()
		sizeInKB := float64(sizeInBytes) / 1024
		fmt.Printf("%s is %f KB in size.\n", filename, sizeInKB)
	}
}

func main() {
	checkFile("input.txt")  // Check for file "input.txt" in the current working directory
	checkFile("/input.txt") // Check for file "/input.txt" in the file system root
}
