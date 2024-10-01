```go
import (
	"os"
)

// Verify that a file called input.txt and a directory called docs exist in the current working directory.
if _, err := os.Stat("input.txt"); os.IsNotExist(err) {
	panic("File input.txt does not exist.")
}
if _, err := os.Stat("docs"); os.IsNotExist(err) {
	panic("Directory docs does not exist.")
}

// Verify that a file called input.txt and a directory called docs exist in the filesystem root.
if _, err := os.Stat("/input.txt"); os.IsNotExist(err) {
	panic("File /input.txt does not exist.")
}
if _, err := os.Stat("/docs"); os.IsNotExist(err) {
	panic("Directory /docs does not exist.")
}
```
