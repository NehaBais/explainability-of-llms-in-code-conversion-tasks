package main

import (
	"fmt"
	"os"
)

func checkIfExists(path string) {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		fmt.Printf("The file or directory %s does not exist\n", path)
	} else if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("The file or directory %s exists\n", path)
	}
}

func main() {
	checkIfExists("./docs/input.txt") // for current working directory
	checkIfExists("/docs/input.txt")  // for filesystem root
}
