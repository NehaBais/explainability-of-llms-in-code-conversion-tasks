Below is the equivalent Golang code for creating a directory and its missing parent directories:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	path := "./parent/test"

	err := os.MkdirAll(path, os.ModePerm)
	if err != nil {
		fmt.Println("An error occurred:", err)
	} else {
		fmt.Println("path successfully created")
	}
}
```

This code uses the `os.MkdirAll` function to create a directory and any missing parent directories. The function returns an error if something goes wrong, otherwise it prints "path successfully created". This should work equally well across different operating systems.
