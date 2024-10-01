 Below is the Golang equivalent of your C code:

```Go
package main

import (
	"fmt"
	"os"
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
Note: This code will only work if you have the permissions to access the files in question. Also, please be aware that the Go language does not support direct file manipulation on Unix systems like Linux or macOS as it does with C/C++. 

This code will use the syscall package to access the stat function of the operating system directly. The first argument is a path to a file and the second one is where you can put your results. Here "input.txt" for current directory and "/input.txt" for root directory.
