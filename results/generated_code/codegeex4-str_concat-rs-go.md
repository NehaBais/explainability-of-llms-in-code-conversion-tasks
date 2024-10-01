In GoLang, you can create a string variable and concatenate strings using `+` operator. Here is the converted code:

```go
package main

import (
	"fmt"
)

func main() {
	s := "hello"
	fmt.Println(s)
	
	s1 := s + " world"
	fmt.Println(s1)
}
```

This GoLang program will create a string variable `s` and assign it the value of `"hello"`. It will then print this string. Afterwards, it creates another string variable `s1`, which concatenates the original string with the string literal `"world"`. Finally, it prints the concatenated string.
