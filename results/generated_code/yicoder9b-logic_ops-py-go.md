Here is the equivalent Golang code for your Python function: 

```go
package main

import (
	"fmt"
)

func logic(a bool, b bool) {
    fmt.Println("a and b:", a && b)
    fmt.Println("a or b:", a || b)
    fmt.Println("not a:", !a)
}
```
In Golang, the keywords `and`, `or` become `&&`, `||` and `not` becomes `!` respectively for boolean operations. Also note that Go does not have an inbuilt "print" function as Python so we use a combination of `fmt.Println` to achieve similar results.
