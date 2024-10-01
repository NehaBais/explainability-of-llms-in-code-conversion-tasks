package main

import (
	"os"
	"fmt"
	"syscall"
)

func main() {
	// Get file size for files in the current directory.
	fileStatCurrentDir, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", fileStatCurrentDir.Size()))

	// Get file size for files in the root directory.
	fileStatRootDir, err := os.Lstat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", fileStatRootDir.Size()))

	// Go equivalent of hard coded "/home/user/myfiles/"
	dirPath := "/input.txt"
	file, err := os.OpenFile(dirPath, os.O_RDONLY, 0644)
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	fileInfo, err := file.Stat()
	if err != nil {
		fmt.Println(err)
		return
	}
	
	// Print size of the file in bytes 
	fmt.Printf("%d\n", fileInfo.Size()))

}