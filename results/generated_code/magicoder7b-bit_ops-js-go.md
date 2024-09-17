 Below is the equivalent Golang code for the given JavaScript function:

```go
package main

import "fmt"
import "math"

func bitwise(a, b int) {
    fmt.Printf("a AND b: %d\n", a&b)
    fmt.Printf("a OR b: %d\n", a|b)
    fmt.Printf("a XOR b: %d\n", a^b)
    fmt.Printf("NOT a: %d\n", ^a) // bitwise NOT on the first integer
    fmt.Printf("a << b: %d\n", int(math.Pow(float64(a), float64(b))) ) // left shift
    fmt.Printf("a >> b: %d\n", a>>b) 
    fmt.Printf("a >>> b: %d\n", int((^uint(a))<<b)>>b ) 
}
```
Please note that bitwise NOT is done differently in Golang and JavaScript using the `~` symbol, as Go also supports unsigned integers. In this case, a bitwise NOT operation on an integer in Go will return an unsigned integer (which can hold larger values than signed ints). This difference in behavior requires the cast to `uint` before applying the shift operation (`^uint(a)`). 

Also, note that Golang doesn't support right rotate operator (>>>), so a workaround is used by first doing a left-shift and then using bitwise NOT. Please check the logic according to your needs as Go might treat this operation differently compared to JavaScript in certain edge cases.
