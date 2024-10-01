The equivalent Golang code for the given Python script would be as follows:

```go
package main

import (
    "fmt"
)

func main() {
    extra := "little"
    newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
    fmt.Println(newStr)
}
```
This program defines an extra variable with a string value of 'little' and then uses the `Sprintf` function to replace each instance of "X" in the string interpolation format ("%s") with the value of the extra variable. The result is printed out using `Println`. 
Keep in mind that Go does not have an equivalent to Python's f-strings, so you must use `Sprintf` for this specific type of string interpolation.
