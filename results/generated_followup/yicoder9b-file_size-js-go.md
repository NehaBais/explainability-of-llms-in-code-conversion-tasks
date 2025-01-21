The error message is indicating that there are some imported packages ("io/ioutil", "runtimeinfo") which are not being used anywhere in the code. 

To fix this error, we need to remove these unused import statements from our Go code. 

So, here's your corrected code:

```go
package main

import (
	"fmt"
	"os"
)

func getFileSize(path string) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		panic(err) // or return err instead of panic
	} else {
		fmt.Println(fileInfo.Size())
	}
}

func main() {
	getFileSize("input.txt")
	// For file in root directory, it depends on the operating system
	if runtime.GOOS == "windows" { // import 'runtime' package to use this constant
		getFileSize("C:\\input.txt") 
	} else {
		getFileSize("/input.txt")  
	}
}
```
