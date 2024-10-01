This code in JavaScript converts a string into another string by replacing character sequences by values or variable values using string interpolation, which is called "variable substitution" in Golang. 

Here's an example of how to achieve this in Go:

```
original := "Mary had a X lamb."
little := "little"
replaced := strings.ReplaceAll(original, "X", little)
```
The `strings` package is used here because it has the `ReplaceAll` function that does string replacement. The first argument of this function is the original string, and the second argument is the substring to be replaced (in this case, X). The third argument specifies the replacement value, which in this case is the variable little. If you wanted to replace multiple characters at once, you could use a slice of strings with multiple values.

The `original` variable now refers to the original string with X. The `replaced` variable contains a modified version of the original string with "little" replacing X. 
