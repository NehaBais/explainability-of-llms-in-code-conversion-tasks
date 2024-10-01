To convert the C++ code to Golang, we will follow these steps:

1. Import necessary packages - In Golang, import statements should be at the top of the file. We will need to import the `strings` package for string operations and the `fmt` package for formatted I/O.

    ```go
    package main
    
    import (
        "fmt"
        "strings"
    )
    ```

2. Declare variables - Initialize and define the necessary variables for the C++ code. In Golang, we declare the variables at the beginning of the function.

    ```go
    func main() {
        original := "Mary had a X lamb."
        toBeReplaced := "X"
        replacement := "little"
    }
    ```

3. Perform string operations - Use the `strings` package functions for string manipulation and replace the target character sequences with new ones.

    ```go
    fmt.Println(original)
    
    // Find and replace 'X' in the original string
    newString = strings.ReplaceAll(original, toBeReplaced, replacement)
    
    fmt.Printf("New String after replacement: %s \n", newString)
    ```

4. Compile and run the Golang code - Save the file with a .go extension, then compile it using the `go` command. After compilation, you can run the program by running the resulting executable file.

    Example commands to compile and run the code:

    ```bash
    go build main.go   # Compile the code into an executable file
    ./main    # Run the compiled binary file
    ```

Here is the complete Golang code for string replacement:

```go
package main

import (
    "fmt"
    "strings"
)

func main() {
    original := "Mary had a X lamb."
    toBeReplaced := "X"
    replacement := "little"

    fmt.Println(original)
    
    // Find and replace 'X' in the original string
    newString = strings.ReplaceAll(original, toBeReplaced, replacement)
    
    fmt.Printf("New String after replacement: %s \n", newString)
}
```

This code will output the original string with 'X' replaced by 'little'.
