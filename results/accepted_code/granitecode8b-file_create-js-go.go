package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	err := ioutil.WriteFile("output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = ioutil.WriteFile("/output.txt", []byte(""), 0644)
	if err != nil {
		fmt.Println(err)
	}
	err = os.Mkdir("docs", 0755)
	if err != nil {
		fmt.Println(err)
	}
	err = os.Mkdir("/docs", 0755)
	if err != nil {
		fmt.Println(err)
	}
}
