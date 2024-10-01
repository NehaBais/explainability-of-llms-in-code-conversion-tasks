package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

func main() {
	err := os.MkdirAll("."+string(filepath.Separator)+"docs", 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = ioutil.WriteFile("."+string(filepath.Separator)+"output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = os.MkdirAll("/", 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = ioutil.WriteFile("/output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
}
