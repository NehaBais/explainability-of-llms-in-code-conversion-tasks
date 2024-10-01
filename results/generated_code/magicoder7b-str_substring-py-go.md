 Below is your Python code converted to Golang:

```go
package main

import (
    "fmt"
    "strings"
)

func main() {
    s := "abcdefgh"
    n, m, char, chars := 2, 3, 'd', "cd"
    
    // starting from n=2 characters in and m=3 in length;
    fmt.Println(s[n-1:n+m-1])

    // starting from n characters in, up to the end of the string;
    fmt.Println(s[n-1:])

    // whole string minus last character;
    fmt.Println(s[:len(s)-1])

    // starting from a known character char="d" within the string and of m length;
    indx := strings.IndexRune(s, rune(char))
    fmt.Println(s[indx:indx+m])

    // starting from a known substring chars="cd" within the string and of m length. 
    indx = strings.Index(s, chars)
    fmt.Println(s[indx : indx + m])
}
```

Please note that Go does not support Unicode strings with multi-byte characters in the same way Python does, so we use `rune` for single UTF-8 character and `string` type for multiple UTF-8 characters. This might lead to unexpected results if you try to index runes or string containing more than one rune, as they do not have a clear cut beginning or end like individual characters in the Python version.

Also note that Go's range is exclusive of the end point, just like Python, so we need to add 1 to m when slicing to get the correct number of characters. 

Moreover, the `strings.Index` and `rune` types are not equivalent in usage as the rune type can only contain a single UTF-8 code point and is not able to handle multi-byte Unicode characters like Python does. We're using string type for multi-byte unicode character in GoLang.
