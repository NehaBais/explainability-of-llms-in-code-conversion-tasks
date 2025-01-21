The error occurs because JavaScript does not have an `Index` function, instead it uses the `indexOf` method for finding the index of the character or substring within the string. Golang's `strings` package provides a similar `Index` method to find the first occurrence of a substring. In addition, in JavaScript we use `substr()` and `substring()` methods to get substrings starting from specific indexes, while in Golang we use indexing syntax `[start:end]` to achieve the same result.

The fix is to replace all occurrences of `indexOf` with `Index`, which will return the index of the first occurrence of a substring within the string. Additionally, since JavaScript's `substr()` and `substring()` functions accept negative indexes as well, we need to adjust them accordingly in Golang. The corrected code block would be:

```go
str := "abcdefgh"
n := 2
m := 3

//    * starting from n characters in and of m length;
fmt.Println(str[n : n+m]) // => "cde"

//    * starting from n characters in, up to the end of the string;
fmt.Println(str[:len(str)-1])   // => "abcdefg"

//    * starting from a known character within the string and of m length;
fmt.Println(str[str.Index('b')+1 : str.Index('b')+1+m])     //  =>  "bcd"

//    * starting from a known substring within the string and of m length; 
fmt.Println(str[str.Index("bc"):str.Index("bc")+m])       //  =>  "bcd"
```
