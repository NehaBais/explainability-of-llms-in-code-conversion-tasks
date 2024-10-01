In Go language, the equivalent code would be as follows. It uses bufio and os packages for reading input from the user and fmt package for printing messages respectively. Please note that in Go we need to convert string inputs into integer format before comparing them.
```Go
package main
import (
    "bufio"
    "fmt"
    "os"
    "strconv"
)

func readInput() int {
    reader := bufio.NewReader(os.Stdin)
    fmt.Print("Enter a number: ")
    text, _ := reader.ReadString('\n')
    number, _ := strconv.Atoi(text)
    return number
}

func main() {
    a := readInput()
    b := readInput()

    if a < b {
        fmt.Println("a is less than b")
    } else if a > b {
        fmt.Println("a is greater than b")
    } else  {
        fmt.Println("a is equal to b")
    }
}
```
