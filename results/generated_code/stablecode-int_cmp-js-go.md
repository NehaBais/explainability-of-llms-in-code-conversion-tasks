Here is the equivalent Golang code:

```go
package main

import "fmt"

func compare(a int, b int) {

    if a == b {
        fmt.Println(a, "equals", b))
    } else if a < b {
        fmt.Println(a, "is less than", b))
    } else if a > b {
        fmt.Println(a, "is greater than", b))
    }

}

func main() {

    var a int
    var b int

    fmt.Print("Enter first integer: ")
    fmt.Scan(&a)

    fmt.Print("Enter second integer: ")
    fmt.Scan(&b)

    compare(a, b)

}
```
This Golang code is an equivalent version to the JavaScript function that was asked in the question above. The two integers a and b are input from user by using `fmt.Scan` which is similar to `document.writeln`. This line of code will print out the message if the first integer is: less than, equal to, or greater than the second integer. The comparison operators '<', '==', '>' are used in the Golang code for each case separately as per the requirement mentioned above.
