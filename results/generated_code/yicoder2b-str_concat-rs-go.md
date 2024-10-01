Sure, here is the equivalent code in Golang:

```Go
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
Please note that in Golang, string concatenation is slightly different from Rust. In the first line of your Rust code you're creating a variable `s` which is an immutable string with value "hello". When you try to assign `s + " world"` to `s1` it gives error since strings are immutable in Go. You need to create a new string and concatenate the two.
