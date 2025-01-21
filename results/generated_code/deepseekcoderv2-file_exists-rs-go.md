 Sure, here's the equivalent code in Go:

```go
package main

import (
	"fmt"
	"os"
)

func main() {
	files := []string{"input.txt", "docs", "/input.txt", "/docs"}
	for _, file := range files {
		info, err := os.Stat(file)
		if os.IsNotExist(err) {
			fmt.Printf("%s does not exist\n", file)
		} else if info.IsDir() {
			fmt.Printf("%s is a directory\n", file)
		} else {
			fmt.Printf("%s is a file\n", file)
		}
	}
}
```

This Go code performs the same checks as your Rust code, verifying whether the specified files or directories exist and whether they are directories or files.
