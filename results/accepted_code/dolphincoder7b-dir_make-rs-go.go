package main

import (
	"io/ioutil"
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0755)
	if err != nil {
		panic(err)
	}
}
