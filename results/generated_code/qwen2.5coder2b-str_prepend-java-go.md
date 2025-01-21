Sure, here's how you can convert the Java code to Go:

```go
package main

import (
    "fmt"
)

func main() {
    // Prepend the string variable with another string literal
    var string = "def"
    string = "abc" + string
    
    fmt.Println(string) // Output: abcdef
}
```

In this code, I used `var` keyword to declare a variable named `string`, initialized it with the value `"def"`. Then, I concatenated the strings `"abc"` and `string` using the `+` operator. Finally, I printed the resulting string using `fmt.Println()`.
