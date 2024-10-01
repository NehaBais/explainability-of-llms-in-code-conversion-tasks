```go
import (
	"os"
	"path/filepath"
)

func main() {
	// Create "output.txt" in the current working directory
	if err := os.Create("output.txt"); err != nil {
		panic(err)
	}

	// Create "output.txt" in the filesystem root
	if err := os.Create(filepath.Join("/", "output.txt")); err != nil {
		panic(err)
	}

	// Create "docs" directory in the current working directory
	if err := os.Mkdir("docs", 0755); err != nil {
		panic(err)
	}

	// Create "docs" directory in the filesystem root
	if err := os.Mkdir(filepath.Join("/", "docs"), 0755); err != nil {
		panic(err)
	}
}
```
