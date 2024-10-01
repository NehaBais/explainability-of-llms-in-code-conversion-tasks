package main

import (
	"fmt"
	"os"
)

func main() {
	err := CreateDir("C:/parent/test")
	if err != nil {
		panic(err) // use proper error handling in your application
	} else {
		fmt.Println("path successfully created")
	}
}

func CreateDir(dir string) error {
	if _, err := os.Stat(dir); os.IsNotExist(err) {
		return os.MkdirAll(dir, 0750)
	}
	return nil
}
