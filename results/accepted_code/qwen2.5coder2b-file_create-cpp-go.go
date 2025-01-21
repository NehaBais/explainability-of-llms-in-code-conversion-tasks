package main

import (
	"fmt"
	"io/ioutil"
	"os"

	"path/filepath"
)

func main() {
	err := ioutil.WriteFile(filepath.Join(".", "output.txt"), []byte{}, 0)
	if err != nil {
		fmt.Println("Error creating file:", err)
		return
	}

	err = os.MkdirAll(filepath.Join("/", "docs"), 0777)
	if err != nil {
		fmt.Println("Error creating directory:", err)
		return
	}
}
