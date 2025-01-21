To convert the given C code to Golang, you need to use some additional packages such as `os` for file operations and `syscall` for system calls. Below is the equivalent Go code:

```go
package main

import (
	"fmt"
	"os/exec"
)

func main() {
	var statStat sys.Stat_t
	err := syscall.Stat("input.txt", &statStat)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", int(statStat.Size))

	var statStat1 sys.Stat_t
	err = syscall.Stat("/", &statStat1)
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("%d\n", int(statStat1.Size))
}
```

In this Go code:
- We use `syscall.Stat` to get the file size of "input.txt" in the current directory.
- We also use `syscall.Stat` to get the file size of "/input.txt" in the file system root.
- The `size` field of the `Stat_t` struct returned by `syscall.Stat` is a 32-bit integer, so we cast it to an integer before printing.

Please ensure that the Go environment has the necessary permissions to access these files.
