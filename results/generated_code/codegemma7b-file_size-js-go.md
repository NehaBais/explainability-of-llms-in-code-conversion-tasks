```go
import (
	"os"
)

func GetFileSize(filename string) int64 {
	file, err := os.Open(filename)
	if err != nil {
		// Handle error
	}
	defer file.Close()

	fi, err := file.Stat()
	if err != nil {
		// Handle error
	}

	return fi.Size()
}

func main() {
	inputSize := GetFileSize("input.txt")
	rootSize := GetFileSize("/input.txt")

	// Use inputSize and rootSize variables
}
```
