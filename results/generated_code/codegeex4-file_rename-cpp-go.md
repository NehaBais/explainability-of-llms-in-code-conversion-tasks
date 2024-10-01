Below is the Go code equivalent to your C++ code. In Go, you can use the `os.Rename` function from the standard library `os` package.

```go
package main

import (
	"log"
	"os"
)

func renameFiles() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		log.Fatal(err)
	}
}

func renameRootFiles() {
	err := os.Rename("/input.txt", "/output.txt")
	if err != nil {
		log.Fatal(err)
	}

	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		log.Fatal(err)
	}
}

func main() {
	renameFiles()
	renameRootFiles()
}
```
Please note that renaming files in the root directory (`"/input.txt"`, `"/output.txt"`) might require root permissions which could not be possible with all Go environments. You also need to make sure your code is running in an environment where it can perform such operations, for instance on a Linux-based system.

Finally, remember that you'll need to handle these errors appropriately in a real-world application according to your requirements and constraints.
