package main

import (
	"io/ioutil"
	"os"
)

func createFile() error {
	file, err := os.Create("output.txt")
	if err != nil {
		return err
	}
	defer file.Close()
	return nil
}
func main() {
	err := createFile()
	if err != nil {
		fmt.Printf(err)
	}
}
