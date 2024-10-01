In Golang, the equivalent code would be:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Create a new empty file "output.txt" in the current directory and root directory
	err := os.WriteFile("./output.txt", []byte{}, 0644)
	if err != nil {
		fmt.Println(err)
	}

	err = os.WriteFile("/output.txt", []byte{}, 0644)
	if err != nil {
		fmt.Println(err)
	}

	// Create a new empty directory "docs" in the current directory and root directory
	err = os.Mkdir("./docs", 0755)
	if err != nil {
		fmt.Println(err)
	}

	err = os.Mkdir("/docs", 0755)
	if err != nil {
		fmt.Println(err)
	}
}
```
