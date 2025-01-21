Here is how you can convert the Python code to Golang.

```golang
package main

import (
    "fmt"
    "strings"
)

func compare(a interface{}, b interface{}) {
    switch a := a.(type) {
    case string:
        fmt.Printf("%v is of type %T and %v is of type %T\n", a, a, b, b)
        if s, ok := b.(string); ok {
            if a < s { fmt.Printf("%v is strictly less than  %v\n", a, s) }
            if a <= s { fmt.Printf("%v is less than or equal to %v\n", a, s) }
            if a > s { fmt.Printf("%v is strictly greater than  %v\n", a, s) }
            if a >= s { fmt.Printf("%v is greater than or equal to %v\n", a, s) }
            if a == s { fmt.Printf("%v is equal to %v\n", a, s) }
            if a != s { fmt.Printf("%v is not equal to %v\n", a, s) }
        }
    default:
        panic("Unhandled type")
    }

}

func main() {
    compare("YUP", "YUP")
    compare("BALL", "BELL")
    compare("24", "123")
    compare(5.0, 5)
}
```

- In Go, the `interface{}` is used to represent a value of any type.
- `switch` statement in Go is similar to Python's `match-case`.
- The `.(type)` construct in a switch statement can be used for type assertions: it checks if an interface holds a specific type and assigns that value to a variable.

Note: Golang does not support comparison between different types (like string and integer) directly, so the `compare` function only accepts arguments of type `string`. If you want to compare numbers, use direct comparison with the appropriate type.
