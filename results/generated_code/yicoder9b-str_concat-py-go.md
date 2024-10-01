In GoLang the equivalent code would be:

```Go
package main
import (
	"fmt"
)
func main() {
    var s1 string = "hello"
    s3 := s1 + " world"
    fmt.Println(s3)
  
    s2 := s1 + " world"
    fmt.Println(s2)

    s1 = "hello"
    s2 = s1 + ", world, mom"
    fmt.Println(s2)
}
``` 
In GoLang, we don't have a direct equivalent of Python's `join()` function as strings can be concatenated using the `+` operator. Also note that Go requires explicit declaration and assignment in separate steps for variables unlike python where they could be done together or in one line.
