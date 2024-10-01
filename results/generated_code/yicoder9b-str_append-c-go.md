In Go, you can use the `+` operator to concatenate strings. Here is how you could convert the given C code into a Go code:

```go
package main
import (
	"fmt"
)

func main() {
    str := "Good Morning"
	str = str + " to all" 
	str = str + " !!!"
	fmt.Println(str)
}
```
