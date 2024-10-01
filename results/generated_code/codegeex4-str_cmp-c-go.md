In Go, the `strings` package provides a variety of methods for string manipulation and comparison. Here's how to achieve similar functionality as provided in the C code:

```go
package main

import (
	"fmt"
	"strings"
)

func compare(a, b string) {
	fmt.Printf("%s %d %d %d %d %d %d %s\n",
		a,
		strings.Compare(a, b), strings.Compare(b, a), strings.HasPrefix(a, b), strings.HasSuffix(a, b),
		strings.Contains(a, b), strings.Contains(b, a))
}

func compareCaseInsensitive(a, b string) {
	fmt.Printf("%s %d %d %d %d %d %d %s ignoring case\n",
		a,
		strings.Compare(strings.ToLower(a), strings.ToLower(b)), strings.Compare(strings.ToLower(b), strings.ToLower(a)),
		strings.HasPrefix(strings.ToLower(a), strings.ToLower(b)),
		strings.HasSuffix(strings.ToLower(a), strings.ToLower(b)),
		strings.Contains(strings.ToLower(a), strings.ToLower(b)),
		strings.Contains(strings.ToLower(b), strings.ToLower(a)),
		b)
}

func main() {
	fmt.Println("eq, ne, gt, lt, ge, le")
	compare("ball", "bell")
	compareCaseInsensitive("ball", "bell")
	compare("ball", "ball")
	compareCaseInsensitive("ball", "ball")
	compare("YUP", "YEP")
	compareCaseInsensitive("YUP", "YEP")
	compare("ball", "BELL")
	compareCaseInsensitive("ball", "BELL")
	compare("ball", "BALL")
	compareCaseInsensitive("ball", "BALL")
	compare("YUP", "yep")
	compareCaseInsensitive("YUP", "yep")
}
```

This Go code performs the following tasks:

1. **String Comparison for Equality and Inequality**: Uses `strings.Compare`, which returns 0 if the strings are equal, -1 if a is lexicographically less than b, and +1 otherwise.
2. **Lexical Ordering Before or After**: It checks whether one string starts with (`HasPrefix`) or ends with (`HasSuffix`) another string.
3. **Case Sensitive Comparison**: Directly uses `strings.Compare` for case sensitive comparison.
4. **Case Insensitive Comparison**: Converts the strings to lower case and then compares them using `strings.Compare`.

Note: The Go language does not provide a direct way of comparing numeric strings as these are treated lexically unless we convert the string into an integer or float before comparison. If you attempt to compare a numeric string with another string directly, it will result in a runtime error.
