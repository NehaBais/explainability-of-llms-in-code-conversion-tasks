 In Go language, you can use the `os` package's function `Stat()` to get file information, and then read its `Size()`. Here is how the equivalent code would look like:

```go
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	fileName1 := "/path/to/yourfile.txt" // Provide the path to your file here
	fileInfo, err := os.Stat(fileName1)
	if err != nil {
		log.Fatalf("Could not get size of %s: %v", fileName1, err)
	}
	fmt.Printf("Size of %s is %d bytes\n", fileName1, fileInfo.Size())

    // For another file in the root directory
	fileName2 := "/root/anotherfile.txt" 
	fileInfo, err = os.Stat(fileName2)
	if err != nil {
		log.Fatalf("Could not get size of %s: %v", fileName2, err)
	}
	fmt.Printf("Size of %s is %d bytes\n", fileName2, fileInfo.Size())
}
```
Please replace `/path/to/yourfile.txt` and `/root/anotherfile.txt` with the actual paths to your files. 

The `log.Fatalf` function will terminate the program if an error occurs, similar to how `unwrap_or_else()` in Rust would do.
