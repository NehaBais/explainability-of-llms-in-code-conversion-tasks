
The error message is indicating that the `io/ioutil` package is imported but not used in the code. This is likely because the `os` package provides a similar functionality for reading files, so it's not necessary to import and use `ioutil`.

To fix this issue, you can remove the import statement for `io/ioutil`, as it is not needed. Here's the corrected code:
```go
package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	defer file.Close()

	stat, err := file.Stat()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Size of input.txt is", stat.Size())
}
```
