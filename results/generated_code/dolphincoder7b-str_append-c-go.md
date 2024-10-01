```go
package main

import (
    "fmt"
    "strings"
)

func main() {
    str := "Good Morning"
    cstr := " to all"
    cstr2 := " !!!"

    // failure when space allocated to str is insufficient.
    if len(str)+len(cstr)+len(cstr2) <= cap(str) {
        /* 1st method */
        newStr := strings.Join([]string{str, cstr}, "")

        /* 2nd method */
        newStr = fmt.Sprintf("%s%s", str, cstr2)

        fmt.Println(newStr)
    }
}
```

1. In Golang, string concatenation is done using the `strings.Join` function instead of `strcat`. The `join` function returns a new concatenated string without modifying any existing strings or creating any intermediate array.
   - `[]string{str, cstr}`: Create a slice that contains the original string `str` and the additional string `cstr`.
   - `strings.Join(slice, "")`: Concatenate all elements of the given slice with an empty string as the separator (in this case, no space).
2. The `sprintf` function is used to format the new string without modifying any existing strings or creating any intermediate array.
   - `%s%s`: Use the `%s` format specifier twice to print the original string followed by the additional string.
   - `fmt.Sprintf("%s%s", str, cstr2)`: Create a new formatted string using the given format specifiers and arguments.
3. The use of `len()` and `cap()` ensures that there is sufficient space in the buffer for the final result without any errors or panics. If the total length of the original string and additional strings is greater than the capacity of the buffer, the program will panic.
