To convert the C++ code to Golang, we will follow these steps:

1. Import necessary packages - In Golang, this is done using the `package` keyword followed by the package name and a semicolon at the end of the import statement.
    ```go
    package main
    
    import (
        "fmt"
    )
    ```
2. Declare variables for user input and mathematical operations - We will use the `var` keyword followed by variable names, types, and initial values in Golang.
    ```go
    var a int
    var b int
    ```
3. Read user input using the `fmt.Scanf()` function - In Golang, we can read user input using the `fmt.Scanf()` function which takes a format string as its first argument and receives input based on that format.
   ```go
   fmt.Scanf("%d %d", &a, &b)
   ```
4. Calculate mathematical operations using built-in functions - We will use built-in functions for addition, subtraction, multiplication, division, and modulus (remainder).
    ```go
    var sum = a + b
    var difference = a - b
    var product = a * b
    var quotient = a / b
    var remainder = a % b
    ```
5. Display the results using the `fmt.Printf()` function - We will use the `fmt.Printf()` function to display the output in the desired format.
   ```go
   fmt.Printf("a+b = %d\n", sum)
   fmt.Printf("a-b = %d\n", difference)
   fmt.Printf("a*b = %d\n", product)
   fmt.Printf("a/b = %d, remainder %d\n", quotient, remainder)
   ```
6. Return 0 to indicate successful execution of the program - In Golang, we need to return a status code indicating whether the program executed successfully or encountered any errors during execution.
    ```go
    return 0
    ```
The modified code will look like this:
```go
package main

import (
    "fmt"
)

func main() {
    var a int
    var b int
    
    fmt.Scanf("%d %d", &a, &b)

    var sum = a + b
    var difference = a - b
    var product = a * b
    var quotient = a / b
    var remainder = a % b

    fmt.Printf("a+b = %d\n", sum)
    fmt.Printf("a-b = %d\n", difference)
    fmt.Printf("a*b = %d\n", product)
    fmt.Printf("a/b = %d, remainder %d\n", quotient, remainder)

    return 0
}
```
