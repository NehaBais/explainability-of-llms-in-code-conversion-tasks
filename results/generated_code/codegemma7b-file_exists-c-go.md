```go
import (
	"fmt"
	"os"
)

func checkFile(path string) bool {
	info, err := os.Stat(path)
	return err == nil && info.Mode().IsRegular()
}

func checkDirectory(path string) bool {
	info, err := os.Stat(path)
	return err == nil && info.Mode().IsDir()
}

func main() {
	fmt.Println("input.txt is a regular file?", checkFile("input.txt"))
	fmt.Println("docs is a directory?", checkDirectory("docs"))
	fmt.Println("/input.txt is a regular file?", checkFile("/input.txt"))
	fmt.Println("/docs is a directory?", checkDirectory("/docs"))
}
```
