Below is the equivalent Golang code for the given JavaScript task:

```go
import (
	"os"
)

func main() {
	if err := os.Rename("input.txt", "output.txt"); err != nil {
		panic(err)
	}
	if err := os.Rename("c:/input.txt", "c:/output.txt"); err != nil {
		panic(err)
	}
	if err := os.Mkdir("mydocs", 0755); err != nil {
		panic(err)
	}
	if err := os.Rename("docs", "mydocs"); err != nil {
		panic(err)
	}
	if err := os.Rename("c:/docs", "c:/mydocs"); err != nil {
		panic(err)
	}
}
```
Remember to replace `0755` with the desired permissions you want for folders in the `os.Mkdir()` function.
