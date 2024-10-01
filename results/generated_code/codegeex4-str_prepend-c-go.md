The equivalent code in Golang would be:

```go
package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cstr := "Changed "
	newStr := cstr + str
	fmt.Println(newStr)
}
```

Please note that the original C program concatenates the `cstr` and a duplicate of `str`. However, in Golang we do not need to create a duplicate because strings are immutable. Also, there is no need for memory deallocation in Golang as it uses garbage collection for memory management.
