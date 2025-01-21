package main

import (
	"io/ioutil"
	"os"
)

func main() {
	// Check if input.txt exists in the current working directory
	_, err := ioutil.ReadFile("docs/input.txt")
	if err != nil {
		if os.IsNotExist(err) {
			println("input.txt does not exist in the current working directory.")
		} else {
			panic("Error reading input.txt: " + err.Error())
		}
	}

	// Check if input.txt exists in the filesystem root
	err = ioutil.ReadFile("/docs/input.txt")
	if err != nil {
		if os.IsNotExist(err) {
			println("input.txt does not exist in the filesystem root.")
		} else {
			panic("Error reading input.txt: " + err.Error())
		}
	}

	// Check if docs directory exists in the current working directory
	exists, err := fileExists(os.Getenv("PWD"), "docs")
	if err != nil {
		panic("Error checking for docs directory: " + err.Error())
	} else if !exists {
		println("docs directory does not exist in the current working directory.")
	}

	// Check if docs directory exists in the filesystem root
	exists, err = fileExists("/", "docs")
	if err != nil {
		panic("Error checking for docs directory: " + err.Error())
	} else if !exists {
		println("docs directory does not exist in the filesystem root.")
	}
}

func fileExists(path string, filename string) (bool, error) {
	_, err := os.Stat(filepath.Join(path, filename))
	if err != nil {
		if os.IsNotExist(err) {
			return false, nil
		} else {
			return false, err
		}
	}
	return true, nil
}
