```go
import "os"

// mkdirp creates a directory and any missing parents.
func mkdirp(path string) error {
	return os.MkdirAll(path, os.ModePerm)
}
```
