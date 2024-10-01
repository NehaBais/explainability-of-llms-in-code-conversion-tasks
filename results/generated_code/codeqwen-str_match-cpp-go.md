Here is the equivalent code in Golang:

```golang
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
		fmt.Println("The first string starts with the second string")
	}

	//End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("The first string ends with the second string")
	}

	//Anywhere
	loc := strings.Index(s2, s3) //returns -1 if not found
	for loc != -1 {
		fmt.Printf("Match found at location: %d\n", loc)
		loc = strings.Index(s2, s3, loc+1) //continues from the next character
	}

	if loc == -1 {
		fmt.Println("No match found")
	}
}
```

Here's how it works:

1. `strings.HasPrefix(s1, s3)` checks if `s1` starts with `s3`. If so, it returns true, otherwise false.

2. `strings.HasSuffix(s1, s3)` checks if `s1` ends with `s3`. If so, it returns true, otherwise false.

3. The `Index` function in GoLang is a more powerful version of the `find` method provided in C++. It not only returns the first occurrence of a substring but also allows you to specify an offset from which to search for the string. In this case, we're searching for all occurrences of `s3` within `s2`. If a match is found, it returns the index position, otherwise -1 is returned.

The rest of the code then iterates over the matches and prints their positions.
