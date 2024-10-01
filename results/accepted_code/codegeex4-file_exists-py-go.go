package main

import (
	"fmt"
	"os"
)

func checkFilesAndDirectories(path string) {
	if _, err := os.Stat(path + "/input.txt"); !os.IsNotExist(err) {
		fmt.Println("File exists:", path+"/input.txt")
	} else {
		fmt.Println("File does not exist:", path+"/input.txt")
	}

	if _, err := os.Stat(path + "/docs"); !os.IsNotExist(err) {
		fmt.Println("Directory exists:", path+"/docs")
	} else {
		fmt.Println("Directory does not exist:", path+"/docs")
	}
}

func main() {
	checkFilesAndDirectories(".")
	checkFilesAndDirectories("/")
}
