package main

import (
	"os"
)

func main() {
	fs := os.FileSystem()
	file, _ := fs.Open("input.txt")
	if file != nil {
		println("File exists in current working directory")
	} else {
		println("File doesn't exist in current working directory")
	}
	file, _ := fs.Open("c:\\input.txt")
	if file != nil {
		println("File exists at c:/ in current working directory")
	} else {
		println("File doesn't exist at c:/ in current working directory")
	}
	folder, _ := fs.Open("docs")
	if folder != nil {
		println("Folder exists in current working directory")
	} else {
		println("Folder doesn't exist in current working directory")
	}
	folder, _ := fs.Open("c:\\docs")
	if folder != nil {
		println("Folder exists at c:/ in current working directory")
	} else {
		println("Folder doesn't exist at c:/ in current working directory")
	}
}
