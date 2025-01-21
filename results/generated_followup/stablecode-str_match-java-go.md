The error in this code is that there's an extra closing parenthesis on the 17th line: `)`. This causes a syntax error because it ends the statement with an unexpected closing parenthesis.
To fix this, remove the extra closing parenthesis at the end of the 17th line.

The corrected code block is now as follows:
```go
package main

import (
	"fmt"
)

func main() {

    // Part 1 
    fmt.Println("Does 'abcd' start with 'ab'? 
", "abcd".StartsWith("ab"))

    // Part 2 
    fmt.Println("Does 'abcd' contain 'bb'? 
", "abcd".Contains("bb"))
    fmt.Println("Does 'abab' contain 'ab'? 
", "abab".Contains("ab"))
    loc := -1
    loc = strings.Index("abab", "bb", loc+1)) // returns 2
}
```
