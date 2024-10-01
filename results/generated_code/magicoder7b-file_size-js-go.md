 The equivalent Go code would be:

```go
package main

import (
	"fmt"
	"os"
)

func checkFileSize(filePath string) {
	info, err := os.Stat(filePath)
	if err != nil {
		fmt.Printf("Error: %s\n", err)
	} else {
		fmt.Println("Size of the file is: ", info.Size())
	}
}

func main() {
	checkFileSize("input.txt")
	checkFileSize("c:/input.txt")
}
```

In this Go code, we use `os.Stat` function to get information about the file which returns a FileInfo struct with fields for name, size, mode type and modification time. We then print out the size of the file from this struct in the checkFileSize function.
The error handling is done by catching any potential errors that can occur when trying to access the file (like it not existing). In Go we use `os.Stat` instead of ActiveXObjects as JavaScript because the ActiveXObject functionality you're using doesn't exist in standard Go libraries, but exists in JavaScript runtime environment only.
