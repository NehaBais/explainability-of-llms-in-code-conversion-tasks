package main

import (
	"os"
	"log"
)

func main() {
	// Rename file in current working directory.
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		log.Fatalln("File move error: ", err))
	}

	// Rename directory in current working directory.
	if err := os.Rename("docs", "mydocs"); err != nil {
		log.Fatalln("Directory rename error: ", err))
	}

	// Repeat the process once more from filesystem root.
	if err := os.Rename("/input.txt", "/output.txt"); err != nil {
		log.Fatalln("File move error: ", err))
	}

	if err := os.Rename("/docs", "/mydocs"); err != nil {
		log.Fatalln("Directory rename error: ", err))
	}
}