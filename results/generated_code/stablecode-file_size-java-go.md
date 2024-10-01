Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Stat("file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("%,d B%n", fileA.Size()))
	
	fileB, err := os.Stat("/file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("%,d B%n", fileB.Size()))
}
```
This Go code does the same thing as your provided Java code. It verifies the size of a local file called input.txt, and another one in the file system root.
