package main

import (
	"fmt"
	"os"
)

func fileExists(path string) bool {
	_, err := os.Stat(path)
	if os.IsNotExist(err) {
		return false
	}
	return true
}
func main() {
	fmt.Println("Current working directory:", fileExists("./input.txt"))
	fmt.Println("File input.txt exists: ", fileExists("./input.txt"))
	fmt.Println("Zero length file zero_length.txt exists: ", fileExists("./zero_length.txt"))
	fmt.Println("Directory docs exists: ", fileExists("./docs/input.txt"))
	fmt.Println("File docs/input.txt exists: ", fileExists("./docs/input.txt"))
	fmt.Println("File input.txt size: ", fileExists("./input.txt"))
}
