Here is how you can convert the JavaScript code to Golang.

```golang
package main

import (
    "fmt"
    "strings"
)

func main(){
    fmt.Println("abcd" == "abcd") //true
    fmt.Println(123 == "123")   //false

    fmt.Println(strings.EqualFold("ABCD", "abcd"))  // true (case insensitive)
    
    //Lexical comparison: Comparing strings lexicographically in Golang uses the <, > operators.
    if "abcd" < "dcba" {
        fmt.Println(true) //true
    } else {
        fmt.Println(false)
    }

    if "abcd" > "dcba" {
        fmt.Println(true)
    } else {
        fmt.Println(false)
    }
}
```

Note:
- Golang uses the `strings.EqualFold()` function to compare strings without considering case. This is an additional comparison in Golang that does not exist in JavaScript.

- Golang doesn't implicitly convert numbers to strings while comparing, unlike JavaScript. Hence, `123 == "123"` returns false. In JavaScript, it will return true because of the type coercion feature.

- There are no direct equivalents for `===` or `!==` operators in Golang, as Go does not support strict comparison like JavaScript. Instead, Go uses normal equality (`==`) and inequality (`!=`).
