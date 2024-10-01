In Go, strings are immutable so you can't directly add or concatenate to a string. You have to convert your string to a `byte` array, perform the operation and then convert it back to a string.

Here is the equivalent code in Golang:

```go
package main

import "fmt"

func main() {
    str := []byte("12345678")
    str = append(str, '9', '!')
    fmt.Println(string(str))
}
```

In this code `str` is a byte array. `'9'` and `'!'` are added to the end of this array using the `append()` function. Then it's converted back to a string with `string(str)`, which calls the `Stringer` interface method on the byte slice, joining all its elements with no separator.

This will print: 

123456789!

This is the most idiomatic way in Golang to append to strings.
