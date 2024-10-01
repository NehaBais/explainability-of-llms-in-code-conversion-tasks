### Solution
#### Golang Code:
##### Go code without functions, just a simple program to read and print text strings. The main function will handle input/output with string conversion in between. A golang package called strutil is used for the following three types of string matching operations. It consists of several functions that take two string arguments and perform these operations 
```golang
func StringMatch(in1, in2 string) (out int) {
    if strings.Contains(in1, in2) {
        out = 1 // First string contains the second string at any location
    } else {
        fmt.Printf("First string does not contain second string\n")
    }
    
    if strings.HasPrefix(in1, in2) {
        out = 1 // First string ends with the second string
    } else {
        fmt.Println("String is false.")
    }
    
    if strings.Contains(in1, in2) {
        out = 1
    } else {
        fmt.Printf("First string does not contain second string\n")
    }
    
    return out
}
```
