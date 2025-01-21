 Certainly! Below is the equivalent Golang code for the provided C++ code:

```go
package main

import (
	"os"
)

func main() {
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
```

This Go code performs the same operations as the provided C++ code: it renames `input.txt` to `output.txt` and `docs` to `mydocs`, both in the current working directory and in the filesystem root. If any renaming operation fails, it panics with the error.
