The equivalent Golang code is as follows. In Go you don't need to manually allocate and copy strings like in C but the built-in `fmt` package provides a way to do it for us:

```go
package main

import (
	"fmt"
)

func concat(s1, s2 string) string {
	return fmt.Sprintf("%s%s", s1, s2)
}

func main() {
	s := "hello"
	fmt.Println(s + " literal") // or 
    fmt.Printf("%s literal\n", s)
    
    s = concat(s, " literal")
    fmt.Println(s)
}
```
This code does the same thing as in C: It concatenates a string with another one using `+` or `fmt.Sprintf` and then prints both of them to stdout using `fmt.Print*` functions. The only difference is that Go has built-in support for strings, so we don't need any manual memory management like in C (`malloc/free`).

