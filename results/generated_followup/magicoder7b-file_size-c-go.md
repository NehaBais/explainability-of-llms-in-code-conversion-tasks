 The error occurred because Go does not use "import os" package for operating system-specific functionality. Instead, the syscall package is used which allows access to low level system calls. However, Go doesn't import packages automatically unless they are being directly used in a file. This is a convention to prevent unused imports and to make code more readable.

To fix this issue, remove the "os" import line from your code as it's not being used. The corrected code looks like this:

```go
package main

import (
	"fmt"
	"syscall"
)

func main() {
	var st syscall.Stat_t
	syscall.Stat("input.txt", &st)
	fmt.Println(st.Size)
	syscall.Stat("/input.txt", &st)
	fmt.Println(st.Size)
}
```
The error you were getting is because of how Go handles imports. Since "os" package was not being used, it was flagged as unused and hence the warning/error message. The fix removes this unnecessary import to ensure your code only has necessary packages imported.
