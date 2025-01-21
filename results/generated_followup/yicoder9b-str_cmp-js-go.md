The error occurred because of incorrect syntax used for function arguments, particularly due to the lack of comma (,) or closing parenthesis between string literals. 

The correct way is to separate each argument with a comma. Also, there should be a closing brace after the function call to complete it properly. Here's how you can fix this:

```go
package main
import ("fmt" "strings")
func main() {
    fmt.Println(
        strings.Compare("abcd", "abcd") == 0, // true
        strings.Compare("abcd", "abcd") != 0, // false
        123 == strings.ToInt64("123"),         // true - but note that numeric comparison is done with ints or floats, not as strings
        strings.Compare("ABCD", "abcd") < 0,  // true
        strings.Compare("abcd", "dcba") > 0,  // false
        strings.EqualFold("ABCD", "abcd")     // true (case insensitive)
    )
}
```
