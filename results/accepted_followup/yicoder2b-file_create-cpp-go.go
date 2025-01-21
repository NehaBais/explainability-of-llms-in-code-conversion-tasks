package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Create an empty file called "output.txt" of size 0 bytes and an empty directory called "docs"
	if err := ioutil.Touch("output.txt", nil); err != nil {
		fmt.Println(err)
		os.Exit(1)
	}

	if err := ioutil.Mkdir("docs", 0755); err != nil {
		fmt.Println(err)
		os.Exit(1)
	}

	// Create the directories in / here as well
	filesystemRootDirHandle := "/"
	if err := ioutil.MkdirAll(filesystemRootDirHandle+"/docs", 0755); err != nil {
		fmt.Println(err)
		os.Exit(1)
	}
}
