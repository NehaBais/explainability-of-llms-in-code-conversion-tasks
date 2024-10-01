In Go (Golang), you don't need to use the `var` keyword to declare a variable before using it. Also, there are no explicit type declarations in Go like in Java. Here is your converted code:

```go
stringVar := "def"
stringVar = "abc" + stringVar
```
This Golang code does exactly what your Java code did. It declares a `stringVar` variable and initializes it with the string "def". Then, it prepends the value of another string literal "abc" to the current value of `stringVar`. The result is assigned back to `stringVar`, effectively changing its value from "def" to "abcdelf", depending on how you interpret the code.
