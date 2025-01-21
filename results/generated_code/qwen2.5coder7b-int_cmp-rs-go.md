Here's how you can convert the given Rust code to Golang:

```go
package main

import (
    "bufio"
    "fmt"
    "os"
    "strconv"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    
    fmt.Print("Enter the first integer: ")
    input1, _ := reader.ReadString('\n')
    a, _ := strconv.Atoi(strings.TrimSpace(input1))

    fmt.Print("Enter the second integer: ")
    input2, _ := reader.ReadString('\n')
    b, _ := strconv.Atoi(strings.TrimSpace(input2))
    
    if a < b {
        fmt.Printf("%d is less than %d\n", a, b)
    } else if a == b {
        fmt.Printf("%d equals %d\n", a, b)
    } else {
        fmt.Printf("%d is greater than %d\n", a, b)
    }
}
```

Explanation of the Golang code:
1. We're importing the necessary packages: `bufio`, `fmt`, `os`, and `strconv`.
2. We create a new `bufio.Reader` instance to read input from `os.Stdin`.
3. We prompt the user for two integers, just like in the Rust version.
4. After reading the inputs, we use `strings.TrimSpace()` to remove any leading/trailing whitespace and then convert them to integer using `strconv.Atoi()`.
5. We compare the two numbers as per the Rust code. If a < b, we print that a is less than b. If a == b, we print that they are equal. Otherwise, we print that a is greater than b.
