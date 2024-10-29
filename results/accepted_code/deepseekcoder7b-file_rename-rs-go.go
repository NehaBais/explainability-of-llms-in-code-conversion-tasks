package main

import (
	"fmt"
	"os"
)

func renameFileOrDir(oldPath, newPath string) {
	err := os.Rename(oldPath, newPath)
	if err != nil {
		fmt.Println("Error: ", err)
	}
}

func main() {
	renameFileOrDir("input.txt", "output.txt")
	renameFileOrDir("docs", "mydocs")
	renameFileOrDir("/input.txt", "/output.txt") //It is not recommended to do so as it may cause problems on some systems
	renameFileOrDir("/docs", "/mydocs")          //Also, this will only work if /docs and /mydocs are root directories in the file system
}
