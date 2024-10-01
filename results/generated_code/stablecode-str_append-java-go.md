Here is the equivalent Go code:

```go
package main

import "fmt"

func main() {
    var str = "abc"
    fmt.Println(str)

    str += "def"
    fmt.Println(str)
}
```

This Go program does the same thing as your Java code:

1. It declares a string variable `str` and initializes it to "abc".
2. The program then prints out the value of the `str` variable, which is "abc".
3. The program then appends the string literal "def" to the end of the `str` variable.
4. Finally, the program prints out the updated value of the `str` variable, which should be "abcdef".
