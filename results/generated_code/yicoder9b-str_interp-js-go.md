In Go language, strings are immutable and do not support interpolation directly as in JavaScript or other languages. However you can use `strings` package to replace substrings in a string. Here is how it would look:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"
	replaced := strings.Replace(original, "X", little, 1)
	fmt.Println(replaced) //outputs: Mary had a little lamb
}
```
In this Go code, `strings.Replace` replaces the first instance of "X" with "little" in the original string. It's similar to using the replace method in JavaScript as per your requirements.
