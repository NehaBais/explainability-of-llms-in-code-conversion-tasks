Below is the GoLang equivalent for your JavaScript code:

```golang
package main

import (
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	err := mkdirp("./path/to/dir")
	if err != nil {
		panic(err)
	}
}
```

The `os.MkdirAll` function is used to create a directory and any necessary parent directories. The second argument specifies the permission mode for the new directories, which is set to 0755 by default.

Please note that this GoLang implementation does not include callback functions as in your JavaScript code because Go uses error handling with `return`. If you want to handle errors like in your JavaScript example, you might need to return the error from your function and handle it at the point where you call `mkdirp` in your application.
