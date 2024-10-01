This is how you can convert the JavaScript code to Golang using the Golang file system package:
```
package main

import (
    "os"
)

func main() {
    // Create an empty file called output.txt in the current working directory
    err := os.WriteFile("output.txt", []byte{}, 0644)
    if err != nil {
        panic(err)
    }

    // Create an empty file called output.txt at the filesystem root
    err = os.WriteFile("/output.txt", []byte{}, 0644)
    if err != nil {
        panic(err)
    }

    // Create an empty directory called docs in the current working directory
    err = os.Mkdir("docs", 0755)
    if err != nil {
        panic(err)
    }

    // Create an empty directory called docs at the filesystem root
    err = os.Mkdir("/docs", 0755)
    if err != nil {
        panic(err)
    }
}
```
In Golang, there is no need to check for errors explicitly since it already includes error checking in every function call. All you have to do is handle the possible panics that might occur during file operations using `panic()`. The above code creates an empty file called "output.txt" of size 0 bytes at the filesystem root and a directory called "docs", both times, with the appropriate permissions (`0644` for files and `0755` for directories).

