```go
import (
	"fmt"
	"os"
)

func main() {
	fileA, err := os.Open("file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer fileA.Close()

	fileB, err := os.Open("/file.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	defer fileB.Close()

	fmt.Printf("%,d B\n", fileA.Size())
	fmt.Printf("%,d B\n", fileB.Size())
}
```
