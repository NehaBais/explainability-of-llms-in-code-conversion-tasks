In Golang, you can use `strings.Replace` function which returns a copy of the string s with all instances of old replaced by new. Here is your code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "big"
	replaced := strings.Replace(original, "X", little, -1) //replace all instances of X in original string with big

	fmt<｜begin▁of▁sentence｜>\n"Original: %s\nReplaced: %s\n", original, replaced)
}
```
In this code `strings.Replace` function is used to replace each instance of the string "X" with "big". The -1 as the fourth argument tells it to replace all instances across the entire original string. Then we print out the original and final strings to show that "X" has been replaced by "big".

