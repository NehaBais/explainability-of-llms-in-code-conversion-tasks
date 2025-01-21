The error `str.IndexRune undefined (type string has no field or method IndexRune)` occurs because Golang does not have built-in functions like JavaScript's `substr` for finding substrings. 

To fix this, you can use the following code:

```go
package main

import (
	"fmt"
)

func main() {
	str := "abcdefgh"

	n := 2
	m := 3

	fmt.Printf("Substring starting from n characters and of m length: %s\n", str[n:n+m])
	fmt.Printf("Substring starting from n characters up to the end of the string: %s\n", str[n:])
	fmt.Printf("Substring of whole string minus last character: %s\n", str[:len(str)-1])
	fmt.Printf("Substring starting from a known character within the string and of m length: %s\n", str[str.Index('b')+n:n+m])
	fmt.Printf("Substring starting from a known substring within the string and of m length: %s\n", str[str.Index('bc')+n:n+m])

}
```

This code will now correctly find substrings based on your requirements, without using `IndexRune`.
