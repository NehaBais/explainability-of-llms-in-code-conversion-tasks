Here is your code converted from Java to Golang:

```golang
package main

import "fmt"

func main() {
    var s string = "hello"
    fmt.Println(s + " literal")
    s2 := s + " literal"
    fmt.Println(s2)
}
```
This program does exactly the same thing as your Java code. It creates a variable `s` and assigns it the value `"hello"`. Then, it concatenates this string with another string literal `" literal"` and prints the result. The output is the original string followed by the literal string: `hello literal`. After that, it creates another variable `s2` and assigns it the concatenated result of `s` and the literal string. Finally, it prints the value of `s2`, which again is `hello literal`.
