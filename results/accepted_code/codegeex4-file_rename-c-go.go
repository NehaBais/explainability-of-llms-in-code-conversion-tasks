package main

import (
	"log"
	"os"
)

func main() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}

	// Need root privileges to rename files in the root directory
	rootDir, _ := os.Getwd()
	err = os.Chdir("/")
	if err != nil {
		log.Fatal(err)
	}
	defer func() {
		err = os.Chdir(rootDir)
		if err != nil {
			log.Fatal(err)
		}
	}()

	err = os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}
}
