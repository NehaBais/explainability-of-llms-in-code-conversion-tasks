 Below is the equivalent Golang code for your Python script:

```go
package main

import (
	"fmt"
	"os"
)

func create(directory string) {
	file, err := os.Create(directory + "/output.txt")
	if err != nil {
		fmt.Println("Error:",err)
	} else {
		defer file.Close()
	}
	_ = os.MkdirAll(directory+"/docs", 0755)
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
```

Please note that Go doesn't have a direct equivalent for Python's `with_statement` and also `os.path.join`, so the path construction is done manually using string concatenation ("/"). Also, `file.Close()` will ensure file handle gets closed regardless of any errors in the future.
