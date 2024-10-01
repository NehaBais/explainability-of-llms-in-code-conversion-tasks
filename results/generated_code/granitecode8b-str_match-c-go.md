Here is the Golang code that demonstrates the three types of string matching mentioned in the requirement:
```
package main
import "fmt"
func startsWith(container, target string) bool {
 return len(container) >= len(target) && container[:len(target)] == target
}
func endsWith(container, target string) bool {
 return len(container) >= len(target) && container[len(container)-len(target):] == target
}
func doesContain(container, target string) bool {
 return strings.Contains(container, target)
}
func main() {
 fmt.Printf("Starts with Test ( Hello,Hell ) : %t
", startsWith("Hello","Hell"))
 fmt.Printf("Ends with Test ( Code,ode ) : %t
", endsWith("Code","ode"))
 fmt.Printf("Contains Test ( Google,msn ) : %t
", doesContain("Google","msn"))
}
```
The `startsWith` function checks if the first string starts with the second string by comparing the first few characters of the first string with the second string using the `==` operator. The `endsWith` function works similarly, but it compares the last few characters of the first string with the second string. The `doesContain` function uses the `strings.Contains()` function to check if the second string is present in the first string.
In the `main` function, we call these functions with some sample strings and print the results using the `%t` verb for boolean values.

