package main

import (
	"io/ioutil"
	"log"
	"os"
)

func createFile(name string, size int64) error {
	file, err := os.Create(name)
	if err != nil {
		return err
	}
	defer file.Close()

	// Resize the file to 0 bytes
	err = os.Truncate(name, 0)
	if err != nil {
		return err
	}

	return nil
}

func createDirectory(name string) error {
	err := os.Mkdir(name, os.ModePerm)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	err := createFile("output.txt", 0)
	if err != nil {
		log.Fatalf("Failed to create file: %v", err)
	}

	// Change the working directory to root("/") and perform actions there
	if err = os.Chdir("/"); err != nil {
		log.Fatal(err)
	}

	err = createFile("output.txt", 0)
	if err != nil {
		log.Fatalf("Failed to create file: %v", err)
	}

	err = createDirectory("docs")
	if err != nil {
		log.Fatalf("Failed to create directory: %v", err)
	}
}
