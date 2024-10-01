Here's a possible implementation in Golang:
```go
import (
	"os"
)
func Mkdirp(path string) error {
	return os.MkdirAll(path, 0755)
}
```
This function uses the `os.MkdirAll` function to create the directory and any missing parents. The `exist_ok=True` argument ensures that the function doesn't return an error if the directory already exists.

