The error occurs because `syscall.Stat` function returns a tuple of a `*syscall.Stat_t`, which is not used here, and an error value, but we are only interested in the size of the file. The fix involves removing the unused variable that represents the stat struct, as well as adding `os.Args[1]` to the arguments list of the `Stat` function.

Here's the corrected code:

```go
package main

import  (
	 "fmt"
	 "os"
	 "syscall"
)

func main()  {
	if len(os.Args) < 2  {
		fmt.Println("No file name supplied")
		os.Exit(1)
	}

	file, err  := syscall.Stat(os.Args[1])
	if err  != nil  {
		fmt.Fprintln(os.Stderr, "Error:", err)
		os.Exit(2)
	}

	fmt.Printf("Size of %s is %d bytes\n", os.Args[1], file.Size())
}
```
The fenced code block wraps the entire corrected code in backticks.
