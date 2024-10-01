package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func createFile(fileName string) error {
	_, err := os.Stat(fileName)
	if err == nil {
		return fmt.Errorf("%s already exists", fileName)
	}

	file, err := os.Create(fileName)
	if err != nil {
		return err
	}

	err = file.Close()
	if err != nil {
		return err
	}

	return ioutil.WriteFile(fileName, []byte{}, 0644)
}

func createDir(dirName string) error {
	_, err := os.Stat(dirName)
	if err == nil {
		fmt.Printf("%s already exists\n", dirName)
		return nil
	}

	err = os.MkdirAll(dirName, 0644)
	if err != nil {
		return err
	}

	return nil
}

func main() {
	createFile("output.txt")
	createDir("docs")

	createFile("/output.txt")
	createDir("/docs")
}
