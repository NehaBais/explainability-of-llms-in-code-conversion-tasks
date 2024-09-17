To convert the given Java code to Golang, we can create a file with the name "compInt.go". Here's the updated Golang code:
```
package main
import (
    "bufio"
    "fmt"
    "os"
    "strconv"
)
func main()  {
    reader := bufio.NewReader(os.Stdin)

    // Read first integer
    fmt.Print("Enter first number: ")
    nbr1, _ := reader.ReadString('\n')
    nbr1 = strconv.Itoa(nbr1[:len(nbr1)-1])

    // Read second integer
    fmt.Print("Enter second number: ")
    nbr2, _ := reader.ReadString('\n')
    nbr2 = strconv.Itoa(nbr2[:len(nbr2)-1])

    // Compare and display results
    if nbr1 < nbr2 {
        fmt.Println(nbr1 + " is less than " + nbr2)
    } else if nbr1 > nbr2 {
        fmt.Println(nbr1 + " is greater than " + nbr2)
    } else if nbr1 == nbr2 {
        fmt.Println(nbr1 + " is equal to " + nbr2)
    }
}
```
This code uses the `bufio` package for reading input from the standard input stream and the `strconv` package for parsing strings to integers. It also includes a `main()` function, which prompts the user to enter two numbers and then compares them using different comparison operators (`<`, `>`, `==`) to display appropriate messages.
