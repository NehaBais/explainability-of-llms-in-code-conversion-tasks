Here is the equivalent Golang code for your JavaScript requirements:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "abcdefgh"

	n := 2
	m := 3

	// starting from n characters in and of m length;
	substr := str[n:n+m]] // ====> "cde"

	// starting from n characters in, up to the end of the string;
	str = str[n:]
	fmt.Println(str) // => "cdefgh"
	fmt.Println(strings.TrimSpace(str)))) // => ""cdefgh""
	
	// whole string minus last character;
	str = str[:len(str)-1]] // ====> "abcdefg"

	// starting from a known character within the string and of m length;
	index := strings.Index(str, "b"))
	substr = str[index:index+m]] // ====> "bcd"

	//  * starting from a known substring within the string and of m length. 
	index = strings.Index(str, "bc"))
	substr = str[index:index+m]] // ====> "bcd"
}
```
This Golang code provides equivalent functionalities to your JavaScript requirements.
