 In Golang, the equivalent code would be:

```go
package main

import (
    "fmt"
    "logical" // For logical operations
)

func printLogic(a bool, b bool){
    fmt.Printf("A and B is %v\n", logical.And(a,b))
    fmt.Printf("A or B is %v\n", logical.Or(a,b))
    fmt.Printf("Not A is %v\n", !a)
}
```
You need to import the `logical` package for this code to work as it provides functions for boolean operations (And and Or). 

The Go equivalent of C++'s `std::cout` is `fmt.Printf`, and Golang handles boolean values the same way as C++, so there aren't much differences in this regard. The syntax and the language are somewhat different, but the logical and basic operations are quite similar.
