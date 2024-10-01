 Below is the Golang equivalent of your C code:

```Go
package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!!"

	// Concatenating two strings with '+' operator.
	newStr := str + cstr + cstr2
	fmt.Println(newStr)
}
```
In the Go language, you can concatenate strings using the '+' operator. The 'strings' package also provides a function called 'Join' which can be used to append multiple string values into one. Here is an example:

package main

import (
	"fmt"
	"strings"
)

func main() {
    str := "Good Morning"
    cstr := []string{" to all", "!!!"}
    
	newStr := strings.Join(cstr, "")
	// If you want a space between each string in the slice, 
	// change "+" to " , " and add a space at the start of newStr like this:
    // newStr := " " + strings.Join(cstr, " ")
    
	fmt.Println(newStr)
}


Both methods above will give the same result as your C code.
