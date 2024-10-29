Here is the equivalent Go code to verify if files exist: 

First, we need to import "os" package for file I/O operations in Go:

```go
package main

import (
	"fmt"
	"os"
)

func checkFile(file string) {
	_, err := os.Stat(file)
	if os.IsNotExist(err) {
		fmt.Println("File does not exist:", file)
	} else {
		fmt.Println("File exists:", file)
	}
}

func main() {
	// Current working directory
	checkFile("./docs/input.txt")  // replace "." with the path of your own current work directory if necessary
   
   // File and directory in filesystem root ("/" is equivalent to "\ on windows")
   checkFile("/docs/input.txt")    
}
```

Note that Go does not have built-in support for checking whether a file or directory exists, so it uses os.Stat function which returns an error if the file or directory does not exist, and we can determine its existence by checking this error with os.IsNotExist. 

Also, note that "./" in Go refers to the current working directory, whereas ".\" on windows command prompt refers to the same as "/". Hence, replace "." with your own work directory if necessary. In Unix-based systems (Linux/Mac), it should be "./", and for Windows, it would be ".\\\\".

