```go
package main

import (
	"log"
	"os"
	"strings"
)

func MkdirAll(path string) error {
	s := strings.Split(path, "/")
	for i := 0; i < len(s)-1; i++ {
		if s[i] != "" && s[i] != "." {
			newPath := "/" + strings.Join(s[:i+1], "/")
			err := os.MkdirAll(newPath, 0755)
			if err != nil {
				return err
			}
		}
	}
	return nil
}

func main() {
	path := "path/to/dir"
	err := MkdirAll(path)
	if err != nil {
		log.Fatal("mkdirall: ", err)
	}
}
```

In the given code, we have translated the C function `mkdir_p` into a Go function `MkdirAll`. The main logic of this function is to split the input path string at "/" and then create any missing parent directories. This approach works across multiple platforms as it uses standard library functions.
