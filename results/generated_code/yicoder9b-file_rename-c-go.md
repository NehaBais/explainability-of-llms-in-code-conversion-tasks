The equivalent code in Golang would be:

```Go
package main

import (
	"os"
)

func renameFiles() {
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		panic(err)
	}

	err = os.Rename("docs", "mydocs")
	if err != nil {
		panic(err)
	}

	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		panic(err)
	}

	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		panic(err)
	}
}

func main() {
	renameFiles()
}
```
