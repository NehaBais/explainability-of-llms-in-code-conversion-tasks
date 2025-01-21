 Sure! Below is the equivalent Go code for the provided Rust code. The `os` package in Go provides functionalities similar to those in the standard library of Rust.

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0777) // 0777 is used to specify the file mode, but it's ignored on some platforms
	if err != nil {
		fmt.Println("An Error Occurred:", err)
		return
	}
	fmt.Println("Directory created successfully.")
}
```

In this Go code:
- `os.MkdirAll` is used to create a directory and any necessary parent directories.
- The third argument (`0777`) specifies the file mode, but it's generally ignored on most platforms.
