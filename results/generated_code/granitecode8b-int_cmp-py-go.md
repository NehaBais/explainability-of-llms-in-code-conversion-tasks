Here's the Golang code that does what you want it to do:
```
package main
import (
 "fmt"
)
func main() {
 var a, b int
 fmt.Println("Enter value of a:")
 fmt.Scanln(&a)
 fmt.Println("Enter value of b:")
 fmt.Scanln(&b)
 switch {
 case a < b:
 fmt.Println("a is less than b")
 case a > b:
 fmt.Println("a is greater than b")
 default:
 fmt.Println("a is equal to b")
 }
}
```
To test the code, you can run it in your terminal like this:
```
$ go run main.go
Enter value of a: 5
Enter value of b: 10
a is less than b
$ go run main.go
Enter value of a: 10
Enter value of b: 10
a is equal to b
$ go run main.go
Enter value of a: 20
Enter value of b: 15
a is greater than b
```

