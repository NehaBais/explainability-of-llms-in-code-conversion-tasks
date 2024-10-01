 The first piece of code in Rust is using the `add` trait, which doesn't exist in Golang. However, Go does provide a method called `+=` to append strings together. 

Here's how you can write it in Go:

```Go
package main
import "fmt"

func main(){
    hello := "Hello world"
    hello = hello + "!!!!!" // Use '+' operator for string concatenation
    fmt.Println(hello) 
}
```

In the second piece of code, `push_str` is used to append a string literal to an existing string variable. This operation is mutating the string (changing its contents), so we use `:=` to declare it as mutable and `+=` operator for appending the strings together:

package main
import "fmt"

func main(){
    var hello = "Hello world"
    hello += "!!!!!" // Use '+=' operator for string concatenation
    fmt.Println(hello) 
}
