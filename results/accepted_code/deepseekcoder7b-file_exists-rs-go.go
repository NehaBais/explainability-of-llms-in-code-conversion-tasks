package main

import (
	"fmt"
	"os"
)

func checkFile(file string) {
	_, err := os.Stat(file)
	if err == nil {
		fmt.Println(file, "exists")
	} else if os.IsNotExist(err) {
		fmt.Println(file, "does not exist")
	} else {
		fmt.Printf("error occurred while checking %s: %v\n", file, err)
	}
}

func main() {
	for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		checkFile(file)
	}
}
