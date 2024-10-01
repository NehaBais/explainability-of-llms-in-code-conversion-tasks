 In Go, the code would look like this:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "hello"
	fmt.Println(s)
    
	s1 := s + " world"
	fmt.Println(s1)
}
```

In Go, the `+` operator can concatenate strings. There is no need for a method like `.to_owned()` in Rust because strings are immutable by default in Go. Hence, you don't have to create an owned string from an existing one.
