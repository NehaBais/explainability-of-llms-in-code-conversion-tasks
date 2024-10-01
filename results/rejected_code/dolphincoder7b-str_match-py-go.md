In Golang, you can use the `strings` package for string processing. Here's how to implement the requirements:

1. For determining if the first string starts with the second string, you can use the `HasPrefix()` function in the `strings` package:
```go
str1 := "abcd"
str2 := "ab"
if strings.HasPrefix(str1, str2) {
    fmt.Println("String 1 starts with String 2")
} else {
    fmt.Println("String 1 does not start with String 2")
}
```

2. For determining if the first string contains the second string at any location, you can use the `strings` package's `Contains()` function:
```go
str1 := "abcd"
str2 := "ab"
if strings.Contains(str1, str2) {
    fmt.Println("String 2 is present in String 1")
} else {
    fmt.Println("String 2 is not present in String 1")
}
```

3. For determining if the first string ends with the second string, you can use the `HasSuffix()` function in the `strings` package:
```go
str1 := "abcd"
str2 := "zn"
if strings.HasSuffix(str1, str2) {
    fmt.Println("String 1 ends with String 2")
} else {
    fmt.Println("String 1 does not end with String 2")
}
```

To print the location of a match for part 2, you can use the `Index()` function in the `strings` package:
```go
str := "abab"
subStr := "bb"
index := strings.Index(str, subStr)
fmt.Printf("The position of '%s' in '%s' is %d\n", subStr, str, index) // The position of 'bb' in 'abab' is 2
```

To handle multiple occurrences of a string for part 2, you can use the `strings` package's `Index()` function with a loop:
```go
str := "abab"
subStr := "ab"
index := strings.Index(str, subStr)
for index != -1 {
    fmt.Printf("The position of '%s' in '%s' is %d\n", subStr, str, index) // The position of 'ab' in 'abab' is 0, and the position of 'ab' in 'abab' is 2
    index = strings.Index(str[index+1:], subStr)
}
```

In this example, we use `Index()` to find the first occurrence of a substring within another string, then use a loop to iterate through each occurrence and print its position. The `strings` package also provides functions for other common string operations like splitting, joining, and trimming.
