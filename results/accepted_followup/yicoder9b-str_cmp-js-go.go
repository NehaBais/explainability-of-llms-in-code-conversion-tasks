package main
import ("fmt" "strings")
func main() {
    fmt.Println(
        strings.Compare("abcd", "abcd") == 0, // true
        strings.Compare("abcd", "abcd") != 0, // false
        123 == strings.ToInt64("123"),         // true - but note that numeric comparison is done with ints or floats, not as strings
        strings.Compare("ABCD", "abcd") < 0,  // true
        strings.Compare("abcd", "dcba") > 0,  // false
        strings.EqualFold("ABCD", "abcd")     // true (case insensitive)
    )
}