### Solution
```
package main

import (
    "io/ioutil"
    "os"
)

func main() {
    // Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs"
    err := ioutil.WriteFile("output.txt", []byte{}, 0640)
    if err != nil {
        panic(err)
    }
    os.Mkdir("docs", 0750)
}
```
