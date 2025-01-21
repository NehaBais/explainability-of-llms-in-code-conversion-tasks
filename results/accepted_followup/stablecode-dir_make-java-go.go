package main

import (
	"fmt"
	"os/exec"
)

func main() {
	command := "mkdir -p path/to/dir"
	err := exec.Command("sh", "-c", command)).Run()

	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Path successfully created")
}