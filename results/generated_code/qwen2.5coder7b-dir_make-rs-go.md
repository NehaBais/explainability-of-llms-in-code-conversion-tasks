In Go, you can use the `os` package to achieve the same functionality as Rust's `fs::create_dir_all`. Here's how you could implement it:

```go
package main

import (
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0755)
	if err != nil {
		panic(err)
	}
}
```

This code will create the directory and any missing parent directories, similar to Rust's `fs::create_dir_all`. If an error occurs, it will panic with the error message.
