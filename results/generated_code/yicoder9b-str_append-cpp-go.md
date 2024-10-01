In GoLang, strings are immutable and the idiomatic way to combine them is using `+`. Below is a conversion of the provided C++ code into Go:

```go
package main

import (
	"fmt"
)

func main() {
    greeting := "Hello" 
    greeting += ", world!" 
    fmt.Println(greeting) 
}
```
