import (
	"fmt"
	"strconv"
)

func main() {
	fmt.Println(
		"abcd" == "abcd", // true
		"abcd" == "abcd", // true
		strconv.Itoa(123) == "123", // true
		strconv.Itoa(123) == "123", // false
		"ABCD" == "abcd", // false
		"ABCD" != "abcd", // true
		strconv.Itoa(123) != "123", // false
		strconv.Itoa(123) != "123", // true
		"abcd" < "dcba",  // true
		"abcd" > "dcba",  // false
		strings.ToLower("ABCD") == strings.ToLower("abcd"), // true (case insensitive)
	)
}