To convert the JavaScript code to Golang, we need to adjust it accordingly for Go's string handling functions. Below is the equivalent Golang code:

```go
package main

import (
    "fmt"
)

func main() {
    str := "abcdefgh"

    n := 2
    m := 3

    //   * starting from n characters in and of m length;
    fmt.Println(str[n : n+m])    // => "cde"

    //   * starting from n characters in, up to the end of the string;
    fmt.Println(str[n:])           // => "cdefgh"

    //   * whole string minus last character;
    fmt.Println(str[:len(str)-1])  // => "abcdefg"

    //   * starting from a known character within the string and of m length;
    fmt.Println(str[str.Index('b')+1 : str.Index('b')+1+m])    // => "bcd"

    //   * starting from a known substring within the string and of m length; 
    fmt.Println(str[str.Index('bc'):str.Index('bc')+m])      // => "bcd"
}
```

Note that Golang's `string` type is immutable, which means it doesn't have any set or delete methods like JavaScript does. In the JavaScript code above, we used `substr()`, `substring()` and `indexOf()`. In Golang, to get a substring of string, you can use indexing (`str[n:m]`) syntax. The equivalent methods in Golang are `len(str)`, `str.Index(s)`, and `string(rune(i))`. 

Also note that the `index` function in JavaScript returns the index of a character within the string, while Golang's `strings` package provides the `Index` method to find the first occurrence of a substring. If you want to find the last occurrence, you can use Go's built-in `func Reverse` or a third-party library like "github.com/golanglibs/strings". 

I hope this helps! Let me know if you have any further questions.
