```go
import (
	"fmt"
	"os"
)

func main() {
	fileName := os.Args[1:]
	if len(fileName) == 0 {
		fmt.Println("Error: No file name supplied")
		os.Exit(1)
	}

	fileMetadata, err := os.Stat(fileName[0])
	if err != nil {
		fmt.Println("Error:", err)
		os.Exit(2)
	}

	fmt.Println("Size of", fileName[0], "is", fileMetadata.Size(), "bytes")
}
```
