In Go, there is no direct equivalent of the C++ cin statement which can be used to get user input. Instead, we will use the bufio package for command line inputs in Go. The fmt.Println function has been replaced with fmt.Printf since printf style formatting gives us more control over what gets printed.

Here is how you would translate that code snippet:
```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter first integer: ")
	a, _ := reader.ReadString('\n')
    a = strings.TrimSuffix(a, "\n")  // Remove trailing newline character
  
	fmt.Print("Enter second integer: ")
	b, _ := reader.ReadString('\n')
    b = strings.TrimSuffix(b, "\n")  // Remove trailing newline character
	
	// convert string inputs to integers
	intA, _ := strconv.Atoi(a)  
    intB, _ := strconv.Atoi(b)
    
	fmt.Printf("a+b = %d\n", intA+intB)		// sum
	fmt.Printf("a-b = %d\n", intA-intB)		// difference
	fmt.Printf("a*b = %d\n", intA*intB)     // product
  
	if(intB!=0){
	    fmt.Printf("a/b = %d, remainder %d\n", intA/intB, intA%intB)  // quotient and remainder 
	}else{
		fmt.Println("Division by zero error")
	}  		   			     						// integer division(quotient), modulo(remainder)
}
```
Please note that this code assumes you're using integers as inputs, so it won’t work with non-integer inputs. Also, the go programming language doesn’t support exponentiation operation (** in C++). If you need to perform such operations, you have to use Go's math package or a third-party library like eulerian.

