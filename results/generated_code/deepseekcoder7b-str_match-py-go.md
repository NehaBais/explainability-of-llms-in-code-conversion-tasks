In Golang, you can use the `strings` package to handle these operations. Here is how you do it:

For string matching in Go as well, we have functions like `HasPrefix()` for checking if a string starts with another and `Contains()` to check for substrings. The `Index()` function returns the index of the first instance of the substring found within the larger string. Here's how you could implement these:
```go
import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"
	fmt.Println(strings.HasPrefix(str1, str2)) //prints true if str1 starts with str2
    
    str3 := "zn"
	fmt.Println(strings.HasSuffix(str1, str3)) //prints true if str1 ends with str3

	//For checking substring existence
	str4 := "abab"
	subStr := "ab"
	fmt.Println(strings.Contains(str4, subStr))  //returns true if str4 contains subStr
  
    //To find the position of substring in a string
	loc := 0
	for {
        newLoc := strings.Index(str4[loc:], subStr)
        if newLoc == -1 || loc+newLoc >= len(str4){
            break
        } else{
            fmt.Println(loc + newLoc)  //prints the location of match for part 2
			loc += newLoc + 1           //increase loc by length of subStr and 1 to find next occurrence
        }
	}
}
```
This Golang code will give you the same result as your Python requirements. It uses the built-in functions provided by the `strings` package in Go. If you need to use these features, import them at the beginning of your file. For handling multiple occurrences, we iterate through using a loop and call the Index function until it returns -1 (which indicates that substring is not found).

