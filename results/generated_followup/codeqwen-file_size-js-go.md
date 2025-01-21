The error is because the `ioutil` package was imported but it's not being used in the provided Go code.

Here's the fix: Import the `io/ioutil` package, which contains functions for working with files and directories, and use it for file reading and writing, although it's not necessary for this specific task where we just want to get file size.

Rewritten Go code that solves the problem is as follows:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	// Check file size of 'input.txt' in the current directory
	info, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt: %d bytes\n", info.Size())

	// Check file size of 'c:/input.txt' in the root directory
	info, err = os.Stat("C:/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of c:/input.txt: %d bytes\n", info.Size())
}
```
