```
package main

import (
	"fmt"
)

func main() {
    myStrings := []string{"prepended to", "my string"}
    prepended := ""
    for _, s := range myStrings {
        prepended += s
    }
    fmt.Println(prepended)
}
```
In this conversion, we have replaced the C++ `std::vector<std::string>` with a Go slice of strings `[]string`. We have also replaced the `std::accumulate` function with a simple for loop that concatenates the strings in the slice. Finally, we have replaced the `std::cout` with the `fmt.Println` function to print the resulting string to the console.
