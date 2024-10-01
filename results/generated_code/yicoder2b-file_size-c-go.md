The equivalent code in Golang would be:

```golang
package main

import (
	"os"
	"fmt"
)

func main() {
	file, err := os.Stat("input.txt")
	if err != nil {
		panic(err)
	}
	fmt.Println(file.Size())

	file, _ = os.Stat("/input.txt")
	fmt.Println(file.Size())
}
```
This code does essentially the same thing as your original C code. It uses the `os` package to get information about files, and prints out their sizes in bytes. If an error occurs during this process (e.g., if "input.txt" doesn't exist), it panics with that error.
