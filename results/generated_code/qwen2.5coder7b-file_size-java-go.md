Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("%d B\n", fileA.Size())

	fileB, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	
	fmt.Printf("%d B\n", fileB.Size())
}
```

This code imports the necessary package `os` and uses it to get the size of the files. The `Stat()` function returns a `FileInfo` interface that contains information about the file, from which you can retrieve the size using the `Size()` method. If there is an error when getting the file info, it will be printed out.
