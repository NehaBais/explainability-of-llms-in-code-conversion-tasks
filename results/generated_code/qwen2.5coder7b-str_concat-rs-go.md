Here is your Rust code converted to Golang:

```go
package main

import (
	"fmt"
)

func main() {
	s := "hello"
	fmt.Println(s)
	
	s1 := s + " world"
	fmt.Println(s1)
}
```

In the above Go code, the equivalent of Rust's `.to_owned()` is not needed because strings in Go are immutable and do not require explicit ownership. The `+` operator is used for string concatenation just like in Rust.
