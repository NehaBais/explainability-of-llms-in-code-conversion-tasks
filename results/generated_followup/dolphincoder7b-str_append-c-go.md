The error message is: "invalid argument: str (variable of type string) for built-in cap". 

This means that Go's `cap` function, which returns the capacity of a slice, expects an array or slice as its argument. However, you are passing a string to the `cap` function. To fix this error, you need to convert the string into a slice by using the `[]byte` type.

To rewrite the corrected code in a single code block, you can use the following code:

```go
package main

import (
	 "fmt"
	 "strings"
)

func main()  {
	str := []byte("Good Morning")
	cstr := []byte(" to all")
	cstr2 := []byte(" !!!")

	// failure when space allocated to str is insufficient.
	if len(str)+len(cstr)+len(cstr2) <= cap(str)  {
		 /* 1st method */
		newStr := strings.Join([]string{string(str), string(cstr)}, "")

		 /* 2nd method */
		newStr = fmt.Sprintf("%s%s", str, cstr2)

		fmt.Println(string(newStr))
	}
}
```

In this code, the `[]byte` type is used to convert the string into a slice that can be passed to the `cap` function without causing any errors or panics. The `join` function and the `sprintf` function are then used as before to concatenate the strings and format the output.
