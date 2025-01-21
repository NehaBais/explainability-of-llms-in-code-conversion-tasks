The error occurs because the `path/filepath` package is imported but not used anywhere in the code.

To fix the error, simply remove the import statement for `path/filepath`.

Here's the corrected code:

```go
package main

import (
	"os"
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
