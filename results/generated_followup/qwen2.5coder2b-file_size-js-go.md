The error `runtime.main_main·f: function main is undeclared in the main package` occurs because the program does not have a package named "main". To fix this, you need to create a package named "main" at the root of your project directory. Then, move your `sizeOfInputTxt()` function into this package.

Here's the corrected code:

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
