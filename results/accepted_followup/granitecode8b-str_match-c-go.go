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