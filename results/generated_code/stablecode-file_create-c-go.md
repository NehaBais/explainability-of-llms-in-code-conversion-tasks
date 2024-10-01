Below is the Golang equivalent of your C code:

```Go
package main

import (
	"os"
	"syscall"
)

func main() {
	// Create file in current working directory.
	fd1, err := syscall.Open("output.txt", syscall.O_CREAT|syscall.O_TRUNC|syscall.O_WRONLY, 0640) 
	if err != nil {
		panic(err)
	}
	syscall.Close(fd1)

	// Create file in filesystem root.
	fd2, err := syscall.Open("/output.txt", syscall.O_CREAT|syscall.O_TRUNC|syscall.O_WRONLY, 0640) 
	if err != nil {
		panic(err)
	}
	syscall.Close(fd2)

	// Create directory in current working directory.
	err = os.Mkdir("docs", 0750)
	if err != nil {
		panic(err)
	}
}
```
Please note that the actual permissions may differ slightly based on your system settings and configuration.
