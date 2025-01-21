In Go, strings are immutable. So you can't append string literals onto them. Instead, you need to copy the original string and append the new one to it.
Here is how you can convert your code:

```go
package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	result := fmt.Sprintf("%s%s%s", str, cstr, cstr2)
	fmt.Println(result)
}
```
In this code, the `fmt.Sprintf` function is used to concatenate three strings. The format string `"%.0s%.0s%.0s"` tells `fmt.Sprintf` that we want to put the contents of `str`, followed by `cstr`, and then `cstr2` together.
