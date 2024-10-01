Here is your code converted to Golang:

```go
package main

import "fmt"

func main() {
    var str string = "12345678"
    str += "9!"
    fmt.Println(str)
}
```

Explanation:

Golang doesn't have a `print` function like Python, it uses the `fmt.Println` function for printing output to console. 

In Golang, we use var keyword to declare variables. Here, str is a variable of type string and assigned with the value "12345678". Then, we append the string literal "9!" to str using the "+=" operator. Finally, we print out the contents of str using fmt.Println().
