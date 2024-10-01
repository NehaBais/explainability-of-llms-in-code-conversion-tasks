Answer: 
In Golang, we can use the ReplaceAll() function from the strings package to replace characters in a string. We first convert the original string into a rune slice using []rune(original), and then call ReplaceAll on that slice with "X" as the search pattern and replacement (little) as the new value. Finally, we join the resulting slice back into a string using string([]rune(newString))

Here's the code:

```
package main

import (
    "fmt"
    "strings"
)

func main() {
    original := "Mary had a X lamb."
    toBeReplaced := "X"
    replacement := "little"

    newString := replaceAll([]rune(original), []rune(toBeReplaced), []rune(replacement))
    fmt.Println("Original String:", original)
    fmt.Println("Replacement Result:", string(newString))
}

func replaceAll(s, from, to []rune) (replaced []rune) {
    for i := 0; i < len(from); i++ {
        s = strings.Replace(string(s), string(from[i]), string(to[i]), -1)
    }
    return []rune(s)
}
```
