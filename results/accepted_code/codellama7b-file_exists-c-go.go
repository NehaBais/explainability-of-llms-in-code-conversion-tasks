package main

import (
	"log"
	"os"
)

func checkReg(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return info.Mode().IsRegular()
}

func checkDir(path string) bool {
	info, err := os.Stat(path)
	if err != nil {
		return false
	}
	return info.Mode().IsDir()
}

func main() {
	log.Println("input.txt is a regular file?", checkReg("input.txt"))
	log.Println("docs is a directory?", checkDir("docs"))
	log.Println("/input.txt is a regular file?", checkReg("/input.txt"))
	log.Println("/docs is a directory?", checkDir("/docs"))
}
