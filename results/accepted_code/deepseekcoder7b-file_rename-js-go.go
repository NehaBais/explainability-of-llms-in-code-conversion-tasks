package main

import (
	"os"
)

func moveFile(oldPath, newPath string) {
	err := os.Rename(oldPath, newPath)
	if err != nil {
		panic(err)
	}
}

func moveDir(oldPath, newPath string) {
	err := os<｜begin▁of▁sentence｜>os.Rename(oldPath, newPath)
	if err != nil {
		panic(err)
	}
}

func main() {
	moveFile("input.txt", "output.txt")
	moveFile("c:/input.txt", "c:/output.txt")  // assuming c drive exists, you can use filepath.Join("C:", "input.txt") to generate full path if it's on Windows
	moveDir("docs", "mydocs")
	moveDir("c:/docs", "c:/mydocs")             // same here, C:\ is used in place of c:/ due to Go's standard library functions expect windows paths without the drive letter.
}