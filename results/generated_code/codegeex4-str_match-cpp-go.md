In Go language, the equivalent code would be:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	//Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("s1 starts with s3")
	}

	//End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("s1 ends with s3")
	}

	//Anywhere
	index := strings.Index(s2, s3)
	for index != -1 {
		fmt.Printf("Found %s at position: %d\n", s3, index)
		index = strings.Index(s2[index+1:], s3)
	}
}
```

Note:
1. In Go language, `strings.HasPrefix()` is used to check if a string starts with another substring.
2. Similarly, `strings.HasSuffix()` is used to check if a string ends with another substring.
3. The `strings.Index(str, substr)` function returns the index of the first occurrence of substr in str. If substr is not present in str, it returns -1.
4. It's important to pass the correct starting position to `strings.Index(str, substr)`, which can be obtained by `index + 1` after each iteration.
