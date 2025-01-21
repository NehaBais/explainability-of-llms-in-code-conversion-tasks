 The error is because we imported "strings" package but never used it to call any function from that package. Importing packages is like letting Go know you're going to use something from them, so you need to actually make use of what's in the packages you import.

To fix this, delete or comment out the line importing the "strings" package because we aren't using it in our code. Here's the corrected version:

```go
package main

import (
	//"fmt"
	//"strings"
)

func main() {
	s := "hello"
	fmt.Println(s)

	s1 := s + " world"
	fmt.Println(s1)
}
```
