```go
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Println("usage: mkdir <path>")
		return
	}

	pathToCreate := os.Args[1]

	_, err := os.Stat(pathToCreate)
	if err == nil {
		// Directory already exists, do nothing
		fmt.Println("Directory already exists:", pathToCreate)
		return
	}

	err = os.MkdirAll(pathToCreate, 0755)
	if err != nil {
		log.Fatalf("couldn't create directory: %v", err)
	}
}
```