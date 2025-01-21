package main

import (
	"fmt"
	"os"
)

func checkFile(filename string) {
	if _, err := os.Stat(filename); os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", filename)
	} else {
		fmt.Printf("File %s exists!\n", filename)
	}
}

func checkDirectory(dir string) {
	if _, err := os.Stat(dir); os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", dir)
	} else {
		fmt.Printf("Directory %s exists!\n", dir)
	}
}

func main() {
	checkFile("input.txt")
	checkFile("/input.txt")
	checkDirectory("docs")
	checkDirectory("/docs")
}
