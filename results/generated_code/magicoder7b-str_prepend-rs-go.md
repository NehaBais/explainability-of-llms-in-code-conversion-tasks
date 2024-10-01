 In GoLang, you can achieve this using `strings.Join`. Here is the equivalent code:

```go
package main
import (
	"fmt"
	"strings"
)
func main() {
	var s = "World"
	s = strings.Join([]string{"Hello ", s}, "")
	fmt.Println(s)
}
```
This code creates a new string `s` and joins the string literals `"Hello "` and `"World"` into it using an empty separator, effectively prepending "Hello " to "World". It then prints out the resulting string.
