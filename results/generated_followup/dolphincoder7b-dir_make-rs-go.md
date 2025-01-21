The error occurs because "io/ioutil" is not being used in our code. To fix this, we just need to remove the unnecessary import of the package. Now the corrected Go code looks like this:
```go
package main

import  (
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0755)
	if err != nil {
		panic(err)
	}
}
```
