The error is due to the fact that `ioutil.Stat` is not imported in the Go code. To correct this, you need to import it.

The fix can be done by adding the following line at the beginning of your Go file: `import "io/ioutil"`

This imports the `io/ioutil` package which contains the `Stat` function that allows us to retrieve metadata about a file.

Here is the corrected code in one single code block:

```go
package main

import (
	"fmt"
	"io/ioutil"
	"log"
	"os"
)

func main() {
	fileName := os.Args[1]
	if len(fileName) == 0 {
		log.Fatal("No file name supplied")
	}

	fileInfo, err := ioutil.Stat(fileName)
	if err != nil {
		log.Fatalf("Error: %v", err)
	}

	fmt.Printf("Size of %s is %d bytes\n", fileName, fileInfo.Size())
}
```
