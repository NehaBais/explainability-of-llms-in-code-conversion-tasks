The error occurred due to unexpected parentheses at the end of statements in the Go code. 

To fix this issue, we need to correct the syntax errors by removing unnecessary parentheses.

Here is the corrected code:
```go
package main

import "fmt"

func logic(a bool, b bool) {
    fmt.Println("a AND b:", a && b)
    fmt.Println("a OR b:", a || b)
    fmt.Println("NOT a:", !a)
}

func main() {
    logic(true, false)
}
```

In the single code block, we have rewritten the entire Go code for the given requirement. The `logic` function takes two boolean values (`a` and `b`) as arguments and prints out the result of "and", "or" and "not" operations on both arguments.
