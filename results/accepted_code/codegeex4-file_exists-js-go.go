package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	checkFile("input.txt")
	checkFile("/input.txt")

	checkDir("docs")
	checkDir("/docs")
}

func checkFile(file string) {
	if _, err := os.Stat(file); !os.IsNotExist(err) {
		fmt.Printf("File %s exists.\n", file)
	} else {
		fmt.Printf("File %s does not exist.\n", file)
	}
}

func checkDir(dir string) {
	info, err := os.Stat(dir)
	if err != nil {
		if os.IsNotExist(err) {
			fmt.Printf("Directory %s does not exist.\n", dir)
		} else {
			fmt.Printf("Error: %v\n", err)
		}
	} else if !info.IsDir() {
		fmt.Printf("%s exists but is not a directory.\n", dir)
	} else {
		fmt.Printf("Directory %s exists.\n", dir)
	}
}
