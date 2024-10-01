package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0755)
	if err != nil {
		fmt.Println(err)
	}
}
