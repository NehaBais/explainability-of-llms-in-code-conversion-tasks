In Go, there is no built-in filesystem package for interacting with file system like in C++ standard library (std::filesystem). You can use the 'os' package to get file size:

```go
package main

import (
	"fmt"
	"io"
	"os"
)

func printFileSize(fileName string) {
	file, err := os.Open(fileName)
	if err != nil {
		panic(err)
	}
	defer file.Close()

	info, _ := file.Stat()
	fmt.Println("Size of file " + fileName + " is " + 
			   strconv.Itoa(int(info.Size())) + " bytes.")
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```
This will print the size of file in bytes. If any error occurs during open or stat operation, it will be panicked which is usually desirable way to handle errors when we are not interested in partial results and cannot continue execution under error condition.
