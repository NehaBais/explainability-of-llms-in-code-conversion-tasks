package main

import (
	"log"
	"os"
)

func createDir(path string) {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		err = os.MkdirAll(path, 0755)
		if err != nil {
			log.Fatal(err)
		}
	}
}

func main() {
	createDir("./parent/test")
}
