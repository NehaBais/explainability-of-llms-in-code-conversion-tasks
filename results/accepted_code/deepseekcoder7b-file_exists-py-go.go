package main

import (
	"fmt"
	"os"
)

func checkFile(path string) {
	_, err := os.Stat(path)
	if err == nil {
		fmt.Println("Path", path, "exists")
	} else if os.IsNotExist(err) {
		fmt.Println("Path", path, "does not exist")
	} else {
		fmt.Printf("error occurred: %s\n", err)
	}
}

func main() {
	checkFile("input.txt")
	checkFile("docs")
}
