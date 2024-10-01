In Go (Golang), you can achieve this task by using strings concatenation operation. Here is the conversion of your JavaScript code into Golang:

```go
package main

import "fmt"

func main() {
    // Creating a string variable equal to any text value
    s := ", World"

    // Prepending the string variable with another string literal
    s = "Hello" + s
    
    // Printing the resultant string 
    fmt.Println(s)
}
```
This Golang code is equivalent to your given JavaScript code. It creates a string variable, prepends it with another string literal and finally prints the resultant string.
