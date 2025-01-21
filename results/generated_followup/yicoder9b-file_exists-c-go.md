The error lies within the use of the ternary operator "?:" inside fmt.Printf, which is not allowed in Go according to the language's grammar rules. The ternary operator has been replaced with an if-else condition to determine the print statement. Here is a corrected version:
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
	yesNo := "no"
	if checkReg("input.txt") {
		yesNo = "yes"
	}
	fmt.Printf("input.txt is a regular file? %s\n", yesNo )
	
	yesNo = "no"
	if checkDir("docs") {
		yesNo = "yes"
	}
	fmt.Printf("docs is a directory? %s\n",  yesNo )
	
	yesNo = "no"
	if checkReg("/input.txt") {
		yesNo = "yes"
	}
	fmt.Printf("/input.txt is a regular file? %s\n", yesNo )
	
	yesNo = "no"
	if checkDir("/docs") {
		yesNo = "yes"
	}
	fmt.Printf("/docs is a directory? %s\n",  yesNo )
}
```
