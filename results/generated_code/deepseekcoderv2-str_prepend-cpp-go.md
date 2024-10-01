```
package main
import "fmt"
func main() {
	var myStrings []string = []string{"prepended to", "my string"}
	fmt.Println(strings.Join(myStrings, " "))
}
```

