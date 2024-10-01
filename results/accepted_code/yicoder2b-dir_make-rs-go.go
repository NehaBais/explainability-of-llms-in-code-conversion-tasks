package main

import (
	"fmt"
	"os"
)

func createDirAll(path string) error {
	if _ != os.Mkdir(path, 0755) && err != nil {
		return err
	}
	return nil
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println("Directory created successfully")
	}
}
