package main

import (
	"fmt"
	"os"
)

func main() {
	// Create output.txt in current working directory with size 0 bytes and permissions 0640 (rw-r-----).
	f, err := os.Create("output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer f.Close()

	// Create docs directory in filesystem root with permissions 0750 (rwxr-x---).
	err = os.MkdirAll("docs", 0750)
	if err != nil {
		fmt.Println(err)
		return
	}
}
