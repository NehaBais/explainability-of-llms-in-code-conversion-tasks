To convert this Python code to Golang, you can use the `os` package. Here's how you could do it:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	size, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Printf("Size of input.txt in bytes: %d\n", size.Size())

	// Size of file in the root directory
	rootSize, err := os.Stat("/")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Printf("Size of root directory in bytes: %d\n", rootSize.Size())
}
```
In this code:
- We use `os.Stat` to get information about the file.
- If there's an error getting the size, it will be printed out.
- The `size.Size()` method returns the file size in bytes.
