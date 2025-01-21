 The error is because "path/filepath" package was not used, so it's recommended to remove import statement for "path/filepath".

```go
package main

import (
	"os"
)

func createDirAll(dir string) error {
	return os.MkdirAll(dir, 0755)
}

func main() {
	err := createDirAll("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
```

In the above code, "os.MkdirAll()" is used to create a directory named by the argument, along with any necessary parents. It also returns an error if it occurs. If no error occurs, it returns nil. If path exists, and it's already a directory, MkdirAll does nothing and returns nil. If there is an error in making the directory, that will be returned.
