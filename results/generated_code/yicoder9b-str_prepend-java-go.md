In GoLang, you can achieve this by declaring and assigning values to a string variable as follows:

```go
package main

import (
	"fmt"
)

func main() {
    str := "def"
    str = "abc" + str
    fmt.Println(str) // prints abcdef
}
```
