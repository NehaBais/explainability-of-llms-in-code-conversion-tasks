To convert this JavaScript code to Golang, we need to declare the two variables `a` and `b` as integers, parse these values from the command line arguments, perform the arithmetic operations on them, and then print out the results. Here is the equivalent code in Golang:
```
package main
import (
    "fmt"
    "os"
    "strconv"
)
func main() {
    if len(os.Args) != 3 {
        fmt.Println("Usage: script_name <a> <b>")
        return
    }

    a, err := strconv.Atoi(os.Args[1])
    if err != nil {
        panic(err)
    }

    b, err := strconv.Atoi(os.Args[2])
    if err != nil {
        panic(err)
    }

    sum  := a + b
    difference := a - b
    product := a * b
    division := float64(a) / float64(b) // In Golang, integer division is not possible
    remainder := a % b   // Golang has no modulo operator; instead, use the '%' function directly

    fmt.Printf("a + b  = %d\n", sum)
    fmt.Printf("a - b  = %d\n", difference)
    fmt.Printf("a * b  = %d\n", product)
    fmt.Printf("a / b  = %.2f\n", division) // To print a float with two decimal places, use the format ".2f"
    fmt.Printf("a %% b  = %d\n", remainder)
}
```
Note: The Golang code will still panic if either of the command line arguments is not an integer. We can add error handling to handle these cases as well, but we'll leave this as an exercise for you.
