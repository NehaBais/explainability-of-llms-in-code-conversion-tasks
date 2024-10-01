Below is the equivalent Golang code for the given Java code: 

```go
package main

import (
    "fmt"
    "strconv"
    "os"
)

func getInput() (int, int) {
    var nbr1,nbr2 int
    fmt.Println("Enter first integer:")
    fmt.Scan(&nbr1) 
    fmt.Println("Enter second integer:")
    fmt.Scan(&nbr2) 
    return nbr1,nbr2
}

func compareIntegers() {
    nbr1, nbr2 := getInput()

    if nbr1 < nbr2 {
        fmt.Println(strconv.Itoa(nbr1) + " is less than " + strconv.Itoa(nbr2))
    } else if nbr1 > nbr2 {
        fmt.Println(strconv.Itoa(nbr1) + " is greater than " + strconv.Itoa(nbr2))
    } else {
        fmt.Println(strconv.Itoa(nbr1) + " is equal to " + strconv.Itoa(nbr2))
    } 
}

func main() {
   compareIntegers()
   err := recover()
   if err != nil {
       fmt.Println("Error occurred: ", err)
       os.Exit(-1)
   }  
}
```

In this GoLang code, the user input is done using `fmt.Scan` instead of a BufferedReader like in Java. Also, there are no need to convert integers back and forth between strings with Itoa or ParseInt unlike Java version. 

It has error handling at the end for any unhandled panic which can be an unexpected input from user.

Remember Go does not have a specific catch block like Java. In GoLang, errors are usually returned by functions. However, for the sake of mimicking try-catch in Java code, I introduced a recover mechanism at the end to handle any panics or unhandled errors and gracefully exit the program with an error message.
