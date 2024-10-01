The equivalent code in Golang would be:

```golang
package main

import (
	"os"
	"fmt"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		fmt.Println(err)
	}
	defer file.Close()

	size1 := file.FileInfo().Size()
	fmt.Printf("The size of 'input.txt' is %d bytes\n", size1)

	file, err := os.Open("/")
	if err != nil {
		fmt.Println(err)
	}
	defer file.Close()

	size2 := file.FileInfo().Size()
	fmt.Printf("The size of '/' (root directory in your system) is %d bytes\n", size2)
}
```

Please note that the sizes returned may be larger than the actual size because the file metadata (like blocks used by block devices etc.) are stored separately from the content. Also, for '/', it will give you the total space allocated to the directory in bytes.
