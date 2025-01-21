The error occurs because Go does not support initializing variables with curly braces like C++. In Go, if you want to initialize multiple variables at once, separate each variable by a comma. 

Here is the corrected version of your Go code:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	var myStrings = []string{"prepended to", "my string"}  // initialize variables without curly braces
	var prepended = strings.Join(myStrings, "")           // join the strings in slice with nothing in between
	fmt.Println(prepended)                               // print out the joined string
}
```
