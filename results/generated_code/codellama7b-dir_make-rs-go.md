Sure, I can help you with that. Here's the Go equivalent of the Rust code:
```
package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.MkdirAll("./path/to/dir", 0755)
	if err != nil {
		fmt.Println(err)
	}
}
```
In this Go code, we use the `os.MkdirAll` function to create a directory and any missing parents. The first argument is the path of the directory to be created, and the second argument is the permission bits for the directory. In this case, we set them to 0755, which means that the owner of the directory has full control (rwx), the group has read and write permissions (r-w-wx), and all other users have read permission (r--).

We use `fmt.Println` to print any error messages that may occur during the execution of the function. If there are no errors, the function will return successfully.
