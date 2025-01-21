Here is how you can convert the given C code to Golang:

```go
package main

import (
    "fmt"
)

func main() {
    str := "Good Morning"
    cstr := " to all"
    cstr2 := " !!!"

    // In Go, we use + operator to concatenate strings.
    str += cstr
    x := len(str)
    
    // We can use fmt.Sprintf to format the string. However, in this case,
    // as we are appending a constant string, simple concatenation will work fine.
    str += cstr2

    fmt.Println(str)
}
```

In Go, strings are immutable. This means that you cannot change an existing string after it has been created. Therefore, when you want to "append" another string, what actually happens is the creation of a new string that includes both the original and the appended parts. This is different from C, where `strcat` modifies the first string in-place. The Go version of this program achieves the same result but does so with immutable strings.

Note: If you need to repeatedly perform concatenations on a string in a performance-critical part of your code, consider using `strings.Builder`, as it is optimized for repeated modifications to strings in Go.
