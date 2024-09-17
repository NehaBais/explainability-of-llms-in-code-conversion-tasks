Here's the equivalent Go code for your Rust program:

```go
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	var nums []int 
	for scanner.Scan(){
		num, err := strconv.Atoi(scanner.Text())
		if err != nil{
			fmt.Println("Error reading integer")
			return
		}
		nums = append(nums, num)
		if len(nums) == 2 {
			break
		}
	} 
	a := nums[0]
	b := nums[1]
	if a < b {
		fmt.Printf("%d is less than %d\n", a, b)
	} else if a == b {
		fmt.Printf("%d equals %d\n", a, b)
	} else {
		fmt.Printf("%d is greater than %d\n", a, b)
	} 
}
```
This Go code does the same thing as your Rust code: it reads two integers from stdin and prints out whether the first integer is less than, equal to, or greater than the second one. Note that error handling has been added to handle any issues with parsing an integer from input. If such a problem arises, the program will print "Error reading integer" and then exit.

