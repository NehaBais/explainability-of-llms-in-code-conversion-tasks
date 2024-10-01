This is how you can convert the Python code to Golang using the same approach:
```go
package main

import (
	"fmt"
	"os"
)

func main() {
    // Rename "input.txt" to "output.txt", both in current working dir and filesystem root
    os.Rename("input.txt", "output.txt")
    os.Rename(os.PathSeparator+"docs", os.PathSeparator+"mydocs")

    // Same as above, but in reverse order for testing purposes
    os.Rename("output.txt", "input.txt")
    os.Rename(os.PathSeparator+"mydocs", os.PathSeparator+"docs")
}
```
In Golang, you can use the built-in `os` package and its `rename` function to accomplish this task. The `os.rename` function accepts two arguments - old name (source) and new name (destination). Here's how we can perform file renaming in both current working directory and filesystem root:
1. First, we rename "input.txt" to "output.txt", both in the CWD and FS root by using `os.rename` twice.
2. Next, we rename the directory "docs" to "mydocs".
3. Finally, we rename "output.txt" back to "input.txt" for testing purposes. The `os.rename` function also works in reverse order so you can use it for this purpose as well.
By using the `os` package and its `rename` function, you can easily perform file renaming in Golang.
