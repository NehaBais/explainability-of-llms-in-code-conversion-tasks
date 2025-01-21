The error occurred because the `fs.Stat` function in Rust takes two arguments, the first being the file name as a string and the second being an optional flag value that specifies how to handle symbolic links. In Golang, the equivalent function is available in the `os` package and has the same signature. So, we need to pass the file name as the only argument to `fs.Stat`.

The corrected code is shown below:
```go
package main
import (
	"fmt"
	"os"
)
func main() {
	file_name := os.Args[1]
	metadata, err := os.Stat(file_name)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of %s is %d bytes\n", file_name, metadata.Size())
}
```

