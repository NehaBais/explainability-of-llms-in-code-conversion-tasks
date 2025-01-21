The error occurs because the `strings` package is imported but not used. In GoLang, it's generally considered good practice to include all packages that are used by a program even if they don't actually contribute to its functionality. 

To fix this error, we just have to use the `+` operator in GoLang for string concatenation instead of using sprintf and strdup functions as in C code. Here is how to rewrite the corrected code:

```go
package main

import (
	"fmt"
)

func main() {
	str := "my String"
	prependStr := "Changed "
	newString := prependStr + str
	fmt.Println(newString)
}
```
