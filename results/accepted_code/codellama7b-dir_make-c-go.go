package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage:", filepath.Base(os.Args[0]), "<path>")
		os.Exit(1)
	}
	path := os.Args[1]
	stat, err := os.Stat(path)
	if err != nil {
		if !os.IsNotExist(err) {
			fmt.Println("error:", err)
			os.Exit(1)
		}
		// create the directory if it doesn't exist
		err = os.MkdirAll(path, 0755)
		if err != nil {
			fmt.Println("error:", err)
			os.Exit(1)
		}
	} else if !stat.IsDir() {
		fmt.Println("couldn't create directory", path)
		os.Exit(1)
	}
}
