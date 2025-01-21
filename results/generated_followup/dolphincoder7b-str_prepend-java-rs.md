The error occurs because Rust requires all variables to be declared with a specific type, including string literals. In this case, we are trying to declare a mutable variable `mut string` without specifying its type, which is why the compiler is throwing an error. To fix this issue, we need to explicitly specify the type for our variable as `String`.

The corrected code will look like this:
```rust
let mut string: String =  "def".to_owned(); // convert String to owned type (String is not Copy)
string =  "abc".to_owned() + &string;
```
In the corrected code, we have added a colon `:` after `mut` to specify that the variable `string` should be of type `String`. The `.to_owned()` method is still being used to convert a string slice into an owned `String`, and `&` before `string` is necessary in order to pass it by value without consuming ownership. 

I hope this explanation answers your question! Let me know if you have any further questions or concerns.
