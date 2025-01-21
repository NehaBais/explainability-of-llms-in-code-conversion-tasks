The error message is indicating that the "strings" package was imported but not used, which can be fixed by including it in fmt.Println(). 

To fix this issue, include the import statement for strings at the beginning of your Go script like so - `import ("fmt" "strings")`. The corrected code block is as follows:

```go
package main

import (
	"fmt"
	"strings"
)

func main()  {
	var str string = "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"
	
	if len(str)+len(cstr)+len(cstr2) < 1024 {  
		str += cstr + cstr2
	}
	fmt.Println(strings.TrimSpace(str))
}
```
In the above code, strings.TrimSpace() is used to remove trailing spaces in case concatenation caused them. This would be unnecessary if you were using a specific method to append (like `+=` operator) as with that, any extra spaces are accounted for by the length of str variable itself and there's no need to trim it again.

