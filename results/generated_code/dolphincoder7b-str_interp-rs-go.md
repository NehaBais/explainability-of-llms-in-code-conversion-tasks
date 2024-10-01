The equivalent in Golang is as follows:
```
package main
 
import "fmt"
 
func main() {
    fmt.Println("Mary had a %s lamb", "little")
    // You can specify order
    fmt.Printf("%1$s had a %2$s lamb", "Mary", "little")
    // Or named arguments if you prefer
    fmt.Printf("%[1]s had a %[2]s lamb", map[string]interface{}{"name": "Mary", "adj": "little"})
}
```
In the above code, we use `fmt.Println` and `fmt.Printf` to achieve string interpolation in Golang. The `%s` placeholder is used for substituting a value from the slice of arguments or map of named values. The first `%` sign can be followed by a number to specify an index in the slice of arguments; otherwise, it's interpreted as the name of the field from the map of named arguments.
Note that `%[1]s` and `%[name]s` are examples of the placeholders for specifying names when using `fmt.Printf`. The `[` and `]` characters around a number or name indicate that the following part should be treated as a string, not a format specifier.
