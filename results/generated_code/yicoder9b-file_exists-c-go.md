In Go the equivalent code would be:

```go
package main

import (
	"os"
	"fmt"
)

func checkReg(path string) bool {
	fi, err := os.Stat(path)
	if err != nil || !fi.Mode().IsRegular() {
		return false
	}
	return true
}

func checkDir(path string) bool {
	fi, err := os.Stat(path)
	if err != nil || !fi.IsDir(){
		return false
	}
	return true
}

func main() {
	fmt.Printf("input.txt is a regular file? %s\n", checkReg("input.txt") ? "yes" : "no" )
	fmt.Printf("docs is a directory? %s\n",  checkDir("docs") ? "yes" : "no" )
	fmt.Printf("/input.txt is a regular file? %s\n", checkReg("/input.txt") ? "yes" : "no" )
	fmt.Printf("/docs is a directory? %s\n",  checkDir("/docs") ? "yes" : "no" )
}
```
