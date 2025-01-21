The error in the provided Go code is due to incorrect syntax while appending strings in Go. The correct way of appending strings in Go involves using the '+' operator for string concatenation. 

Here's the corrected code:
```go
package main

import "fmt"

func main() {
    var s1 = "Hello"
    s1 += ", World!"
    fmt.Println(s1)
}
```
In this corrected version, we declare a string variable `s1` with the initial value of "Hello". Then, we append another string literal ", World!"" to the `s1` variable using the '+' operator for concatenation. Finally, we print out the final string value of `s1`.
