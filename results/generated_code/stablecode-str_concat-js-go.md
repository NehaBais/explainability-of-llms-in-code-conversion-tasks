In Go (Golang), you can convert JavaScript code into Golang as shown below:

```go
package main

import "fmt"

func main() {

    // Creating a string variable and assigning it the value of "hello"
    var s = "hello"

    // Creating another string variable, whose value is the original variable concatenated with the string literal " there!"
    var t = s + " there!"
    fmt.Println(t) // Printing the content of the variables
}
```
This program will print: `hellothere!`
