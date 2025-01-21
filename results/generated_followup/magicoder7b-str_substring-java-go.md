 The error occurs because the "fmt" package is imported but not used. Go compiler gives this warning if any of the packages are imported in the source file but not utilized anywhere in the program.

The fix for this issue would be to either remove the unnecessary import or use functions/methods from that package (in this case, fmt). Since we don't use it in our case and it is just an example code, it can safely be removed.

Here is the corrected version of the Go code:

```go
package main

import (
	"strings"
)

func Substring(str string, n int, m ...int) string {
	if len(m) > 0 {
		return str[n : n+m[0]]
	} else {
		return ""
	}
}

func Substring1(str string, n int) string {
	return str[:n]
}

func Substring2(str string) string {
	return str[:len(str)-1]
}

func Substring3(str string, c rune, m int) string {
	return str[strings.IndexRune(str, c) : strings.IndexRune(str, c)+m+1]
}

func Substring4(str string, sub string, m int) string {
	return str[strings.Index(str, sub) : strings.Index(str, sub)+m+len(sub)]
}

func main() {
	// you can call the functions with different parameters here
}
```
