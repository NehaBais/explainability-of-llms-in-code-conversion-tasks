```go
import (
	"fmt"
	"os"
)

func main() {
	for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		_, err := os.Stat(file)
		if err != nil {
			fmt.Printf("%s does not exist\n", file)
			continue
		}

		if fileInfo, err := os.Stat(file); err == nil {
			if fileInfo.IsDir() {
				fmt.Printf("%s is a directory\n", file)
			} else {
				fmt.Printf("%s is a file\n", file)
			}
		}
	}
}
```
