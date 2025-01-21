The equivalent Golang code would look like this:

```go
package main

import (
	"fmt"
	"io/ioutil"
)

func sizeOfInputTxt() {
	data, err := ioutil.ReadFile("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	
	fmt.Printf("Size of input.txt: %d bytes\n", len(data))

	// File in file system root
	rootPath := "/"

	fileData, err := ioutil.ReadFile(rootPath + "input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}

	fmt.Printf("Size of root/input.txt: %d bytes\n", len(fileData))
}
```

This code uses the `ioutil` package to read the file content. The `ReadFile` function returns a byte slice, and its length is equal to the size of the file.

Please note that the `rootPath` variable in Golang is denoted by using a forward slash (/), not backslash (\) as it is commonly used in Unix-like operating systems.
