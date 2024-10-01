In GoLang, the equivalent function is os.MkdirAll and the standard library package is os not fs. Here's a simple translation of your Rust code to Golang:

```go
package main

import (
    "os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0750)
	if err != nil {
		panic(err) // Panic in case of any error
	}
}
```

The mode argument (0750 in this example) is used to set the permissions for each newly created directory along the way. The function os.MkdirAll will create all missing parents needed to make the path valid. If the directory already exists, it does nothing and returns without error.
