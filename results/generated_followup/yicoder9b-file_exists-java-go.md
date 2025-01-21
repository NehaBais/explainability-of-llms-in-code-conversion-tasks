The error occurred because we are trying to assign values to `_` which is not allowed in GoLang. To fix this, we simply need to discard the returned value by assigning it to `_`.

Here's the corrected version of your code:

```go
package main

import (
	"os"
)

func main() {
	_, err := os.Stat("docs/input.txt")
	if os.IsNotExist(err) {
		println("File does not exist or path is incorrect!")
	} else {
		println("File exists and located in the correct directory!")
	}
	_, err := os.Stat("/docs/input.txt")
	if os.IsNotExist(err) {
		println("File does not exist or path is incorrect!")
	} else {
		println("File exists and located in the correct directory!")
	}
}
```
