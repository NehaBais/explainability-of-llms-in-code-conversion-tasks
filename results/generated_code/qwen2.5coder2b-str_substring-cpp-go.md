In Go, the string manipulation functions are similar to C++ in terms of substring extraction. Here is how you could convert your code:

```go
package main

import (
	"fmt"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(s[n:n+m])
	fmt.Println(s[n:])
	fmt.Println(s[:len(s)-1])
	fmt.Println(s[::s.Index(c)+1:m])
	fmt.Println(s[::s.Index(sub)+1:m])
}
```

In this Go code, `s[n:n+m]` extracts a substring from index n to the n+m-1th character. Similarly, `s[n:]` returns all characters from index n to the end of the string. The substring function `s[:len(s)-1]` and `s[::s.Index(c)+1:m]` both use `Index()` function to find a specific character or substring then extract the desired length.

The `s.Index(c)` function returns the first position of the character 'c' in the string, plus one. Then we calculate the starting index from this position and take the substring of size `m`. This is done using slicing which is supported for strings in Go as well.
