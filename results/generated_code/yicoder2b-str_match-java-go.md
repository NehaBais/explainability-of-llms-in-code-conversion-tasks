Here is the equivalent code in Golang:

```golang
package main
import (
    "fmt"
)

func startsWith(str string, prefix string) bool {
    return str[0:len(prefix)] == prefix
}

func contains(str string, substr string) bool {
    return strings.Contains(str, substr)
}

func endsWith(str string, suffix string) bool {
    return strings.HasSuffix(str, suffix)
}

func indexOf(str string, substring string, start int) int {
    return strings.Index(str[start:], substring)
}

func main() {
    fmt.Println(startsWith("abcd", "ab"))  // prints: true
    fmt.Println(endsWith("abcd", "zn"))   // prints: false
    fmt.Println(contains("abab", "bb"))   // prints: false
    fmt.Println(contains("abab", "ab"))   // prints: true
    start := indexOf("abab", "ab")
    fmt.Printf("%d\n", start)              // prints: 2
    start = indexOf("abab", "ab", start+1) // prints: 3
    fmt.Printf("%d\n", start)              // prints: 2
}
```
Note that in Golang, we have to handle some of the functions manually like `strings.Index` and also to use multiple substrings with function `contains`, we need to iterate over each substring and check if it's present else return false. Also remember that string slicing in Golang doesn't support negative indices unlike Java. If you want negative index handling, you can manually calculate the actual position by reversing both strings before checking. 
This also applies for `indexOf` function as well. 

Note: The given examples do not contain any error handling or exception throwing, this would be needed in a real-world scenario, so please add such error handling if required.
