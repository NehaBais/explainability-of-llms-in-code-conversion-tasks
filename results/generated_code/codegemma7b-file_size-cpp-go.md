```go
import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	file, err := os.Stat(filename)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of file %s is %d bytes.\n", filename, file.Size())
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
```
