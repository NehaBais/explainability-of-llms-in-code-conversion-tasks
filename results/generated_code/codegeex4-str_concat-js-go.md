In Golang, you can create and manipulate strings in a similar way as in JavaScript. Here's how you might convert your code:

```go
package main

import "fmt"

func main() {
    s := "hello"
    fmt.Println(s + " there!")
}
```

Here's what each part of the code does:
- `package main` declares a package named "main", which is the starting point for Go programs.
- The `import "fmt"` statement imports the "fmt" package, which provides functions for formatting and printing text.
- `func main()` declares the main function, which is the entry point of the program.
- `s := "hello"` creates a string variable named 's' with the value "hello".
- `fmt.Println(s + " there!")` prints the concatenated string to the console.
