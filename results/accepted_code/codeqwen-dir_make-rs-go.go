package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0755) // set the directory permissions
	if err != nil {
		fmt.Println(err) // handle error
	} else {
		fmt.Println("Directory created successfully")
	}
}
