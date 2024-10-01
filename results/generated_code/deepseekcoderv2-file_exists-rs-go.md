## Answer
Here's the code in Golang:
```golang
package main

import (
	"fmt"
	"os"
)

func main() {
	files := []string{"input.txt", "docs", "/input.txt", "/docs"}
	for _, file := range files {
		if attr, err := os.Stat(file); err == nil {
			if attr.IsDir() {
				fmt.Printf("%s is a directory\n", file)
			} else {
				fmt.Printf("%s is a file\n", file)
			}
		} else {
			fmt.Printf("%s does not exist\n", file)
		}
	}
}
```

