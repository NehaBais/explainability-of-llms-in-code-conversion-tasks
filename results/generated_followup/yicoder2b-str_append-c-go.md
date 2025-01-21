The error occurs because you are trying to pass a string to built-in cap function which expects an integer, and it doesn't recognize 'str' as an argument. This is likely due to the fact that your original string has been modified by Go runtime (like adding new characters) so when it tries to run this line of code, it encounters an error.

The corrected version will look like:
```go
if len(originalString)+len(cstr)+len(cstr2) > cap(newString) { 
    // method 1
    newString = originalString + cstr

    // method 2
    x := len(originalString)
    newString = fmt.Sprintf("%s", originalString[0:x] + cstr2)
}
```
