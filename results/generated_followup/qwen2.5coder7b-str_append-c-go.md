The error is because the variable `x` is declared but not used in the program.

To fix this, either remove the declaration of `x` if it's not needed, or use it in some way within the program (e.g., print its value).

Here is the corrected code in a single code block:

```go
package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	str += cstr
	x := len(str)
	
	fmt.Println(x) // Using x
	str += cstr2

	fmt.Println(str)
}
```
