Sure, here's the equivalent code in Golang:
```go
package main
import (
	"fmt"
	"os"
)
func main() {
	for _, file := range []string{"input.txt", "docs", "/input.txt", "/docs"} {
		info, err := os.Stat(file)
		if err != nil {
			fmt.Println(err)
			continue
		}
		switch mode := info.Mode(); {
		case mode.IsDir():
			fmt.Printf("%s is a directoryn", file)
		default:
			fmt.Printf("%s is a filen", file)
		}
	}
}
```
This code uses the `os` package to check if a file or directory exists and returns an error if it doesn't. The `switch` statement then determines whether the item is a directory or a file and prints a corresponding message.

