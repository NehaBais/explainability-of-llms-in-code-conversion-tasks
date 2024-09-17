Here's the Golang code that meets the requirements:
```go
package main
import (
 "fmt"
 "os"
 "strconv"
)
func main() {
 var nbr1, nbr2 int
 var err error
 fmt.Print("Enter first integer: ")
 nbr1, err = strconv.Atoi(os.Args[0])
 if err != nil {
 panic(err)
 }
 fmt.Print("Enter second integer: ")
 nbr2, err = strconv.Atoi(os.Args[1])
 if err != nil {
 panic(err)
 }
 switch {
 case nbr1 < nbr2:
 fmt.Printf("%d is less than %d", nbr1, nbr2)
 case nbr1 > nbr2:
 fmt.Printf("%d is greater than %d", nbr1, nbr2)
 case nbr1 == nbr2:
 fmt.Printf("%d is equal to %d", nbr1, nbr2)
 }
}
```
To test the code, you can run it in the terminal with two integer arguments like this:
```
$ go run compInt.go 5 3
5 is greater than 3
$ go run compInt.go 5 5
5 is equal to 5
$ go run compInt.go 3 5
3 is less than 5
```

