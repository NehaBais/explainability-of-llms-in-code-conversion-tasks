package main

import (
	"fmt"
	"os"
)

func checkFile(filename string) {
	info, err := os.Stat(filename)
	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", filename)
	} else {
		fmt.Printf("File %s exists!\n", filename)
	}
}

func checkDirectory(dir string) {
	info, err := os.Stat(dir)
	if os.IsNotExist(err) {
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
