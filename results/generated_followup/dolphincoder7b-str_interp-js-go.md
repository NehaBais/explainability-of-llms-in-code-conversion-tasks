The error occurs because there is no `replace` function or method available within the string type in Go. To address this issue, we can use the `strings` package in Golang to perform the replacement operation. Here's the corrected code:

```go
package main

import  "fmt"
import  "strings"

func main() {
	var original = "Mary had a X lamb."
	var little = "little"
	var replaced = strings.ReplaceAll(original, "X", little) // changes the original string
	fmt.Println(replaced)
}
```
In this corrected code, we import the `strings` package to be able to use its `ReplaceAll` function for string replacement. The `strings.ReplaceAll()` function takes three arguments: `original`, the search string "X", and the replacement string "little". It returns a new string where all occurrences of the search string have been replaced by the replacement string. We assign the result of this operation to the `replaced` variable, which now holds the modified string with "little" replacing "X". Finally, we print the value of the `replaced` variable using the `fmt.Println()` function call.