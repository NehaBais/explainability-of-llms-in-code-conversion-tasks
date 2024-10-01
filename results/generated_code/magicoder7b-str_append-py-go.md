 Below is the equivalent Go code for your Python script. 

Please note that in Go, you don't need to declare data types or initialize variables before assigning values to them. Also, string concatenation in Go uses '+' operator instead of '+=' in Python.
```Go
package main

import "fmt"

func main() {
    var str = "12345678" 
	str += "9!"
	fmt.Println(str)
}
```
