The error message indicates that the Golang syntax does not allow functions to start with keywords like GET, IF, and ELSE. Therefore, I will have to change the name of the function to something more suitable, such as "GetAB". Additionally, it seems that Go requires a package declaration in every file, so the first line should be "package main" instead of "GET A B". I also need to remove the "END IF" keyword which is not valid in Golang.

```go
package main

import "fmt"

func GetAB() {
    var a int
    fmt.Print("Enter value of a: ")
    fmt.Scan(&a)

    var b int
    fmt.Print("Enter value of b: ")
    fmt.Scan(&b)

    if (a < b) {
        fmt.Println("a is less than b")
    } else if (a > b){
        fmt.Println("a is greater than b")
    } else if (a == b){
        fmt.Println("a is equal to b")
    }
}
```
