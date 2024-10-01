The Golang equivalent of the provided Java code is as follows:

```go
package main
import (
    "fmt"
)
func Substring(str string, n int, m int) string {
    return str[n : n+m]
}

func Substring2(str string, n int) string {
    return str[n:]
}

func Substring3(str string) string {
    return str[:len(str)-1]
}

func Substring4(str string, c byte, m int) string {
    index := bytes.IndexByte([]byte(str), c)
    if index == -1 {
        // Handle invalid character
        return ""
    }
    return str[index : index+m+1]
}

func Substring5(str string, sub string, m int) string {
    index := strings.Index(str, sub)
    if index == -1 {
        // Handle missing substring
        return ""
    }
    return str[index : index+m+1]
}
```

This code is written in a Golang environment and uses built-in functions to achieve string manipulation tasks. The `Substring` function accepts three parameters: `str`, `n`, and `m`. It returns the substring starting from character `n` with length `m`.
The `Substring2` function also takes two parameters, `str` and `n`, which returns a substring starting from character `n` to the end of the string. The `Substring3` function returns the entire string except for the last character.

For the `Substring4` function, it finds the index of the character `c` within the string `str`. If `c` is not found, an empty string is returned. Otherwise, a substring is extracted from `str` starting at the index of `c`, with length `m+1`.

Similarly for the `Substring5` function, it finds the index of the substring `sub` within the string `str`. If `sub` is not found, an empty string is returned. Otherwise, a substring is extracted from `str` starting at the index of `sub`, with length `m+1`.
