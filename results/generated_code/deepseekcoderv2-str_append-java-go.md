### Solution
```go
package main

import "fmt"

func main() {
	var myString string = "My name is Kunal" // declare a variable of type string and initialize it with the value "My name is Kunal"
	fmt.Println(myString)                      // print the value of the variable to the console
	myString += " 26 years old"                 // append the string literal "My age is 26" to the end of the variable using the + operator
	fmt.Println(myString)                     // print the updated value of the variable to the console
}
```

