Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := strings.Repeat(cstr, 1) + str

	fmt.Println(strings.TrimSpace(dup))))
}
```

Please note that in Go we don't need to use `sprintf` or any other C library function for string manipulation. Instead, Go provides several built-in functions and methods for working with strings. In this case, I used the `strings.Repeat` function to repeat the `cstr` value multiple times. Then, I concatenated the duplicated string with the original `str` variable using the `+` operator. Finally, I printed the resulting string after trimming any leading or trailing whitespace characters using the `strings.TrimSpace` function.
