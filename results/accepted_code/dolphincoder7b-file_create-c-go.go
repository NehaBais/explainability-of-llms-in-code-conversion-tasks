package main

import (
	"os"
)

func main() {
	err := os.ChDir("/home/user") // Change the current working directory to "/home/user"
	if err != nil {
		panic(err)
	}

	fd, err := os.OpenFile("output.txt", os.O_WRONLY|os.O_CREATE|os.O_TRUNC, 0640) // Create a new file with permissions rw-r----- and truncate its contents to zero bytes
	if err != nil {
		panic(err)
	}
	defer fd.Close()

	err = os.Mkdir("docs", 0750) // Create an empty directory with permissions rwxr-x---
	if err != nil {
		panic(err)
	}
}
