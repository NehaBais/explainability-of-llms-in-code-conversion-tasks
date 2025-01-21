Here is the equivalent code in Golang:

```go
package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cstr := "Changed "
	str = cstr + str
	fmt.Println(str)
}
```

In this Golang version, we've directly prepended `cstr` to `str` using the `+` operator. In Go strings are immutable, so you can't change a string itself; instead, you create a new string that contains the original one plus the new content.

The equivalent C code uses `sprintf()` to append a string to an existing buffer, which is not necessary in Go because strings are handled differently.
