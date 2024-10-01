The equivalent code in Golang would be:

```golang
package main

import (
	"fmt"
)

func main() {
	extra := "little"
	fmt.Printf("Mary had a %s lamb.\n", extra)
}
```
This code does the same thing as the original C code but written in Golang. The `Printf` function in Go is similar to the `printf` in C and allows for string interpolation. Instead of "%s" it uses "%v" which stands for a variable value.
