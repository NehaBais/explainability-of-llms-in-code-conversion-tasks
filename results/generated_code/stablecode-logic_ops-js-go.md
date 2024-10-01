Below is the JavaScript code converted to Golang. 

Golang doesn't have a built-in boolean "AND" and "OR", as well as the "not" operator like in JavaScript, so we need to implement these operations manually:

```go
package main

import "fmt"

func logic(a bool, b bool) {

    // Implementing AND operation
    andResult := a && b

    // Implementing OR operation
    orResult := a || b 

    // Implementing NOT operation
    notA := !a  

    fmt.Println("a AND b:", andResult)
    fmt.Println("a OR b:", orResult))
    fmt.Println("NOT a:", notA))
}

func main() {
    logic(true, false)
}
```
You can run the `main()` function to test the program. In this case, it will call the logic function with arguments (true, false).
