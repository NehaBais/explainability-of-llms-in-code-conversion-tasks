The error occurs because the `Stat()` method returns two values, a `fs.FileInfo` object and an error. In Golang, when using multiple return values, they must be assigned to separate variables or in a single variable of a tuple type. The fix is to assign both values to separate variables.
```go
package main
import (
	"fmt"
	"os"
)
func main() {
	fileA, err := os.Open("file.txt")
	if err != nil {
		panic(err)
	}
	defer fileA.Close()
	infoA, err := fileA.Stat()
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d Bn", infoA.Size())
	fileB, err := os.Open("/file.txt")
	if err != nil {
		panic(err)
	}
	defer fileB.Close()
	infoB, err := fileB.Stat()
	if err != nil {
		panic(err)
	}
	fmt.Printf("%d Bn", infoB.Size())
}
```

