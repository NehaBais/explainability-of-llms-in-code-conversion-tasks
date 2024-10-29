In Golang, you can use `strings` package to prepend a string to another. Here is the equivalent code in Golang for your Java snippet:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "def"
	prefix := "abc"
	str = strings.Join([]string{prefix, str}, "")
	fmt.Println(str)  // output: abcdef
}
```

