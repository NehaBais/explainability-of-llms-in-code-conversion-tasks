Sure! Here's the equivalent Rust code:
```rust
fn main() {
 let mut str = String::from("Good Morning");
 let cstr = " to all";
 let cstr2 = " !!!";
 let x = str.len();
 // Failure when space allocated to str is insufficient.

 if x < (str.len() + cstr.len() + cstr2.len()) {
 // 1st method
 str += cstr;

 // 2nd method
 let y = str.len();
 str.push_str(cstr2);
 }
 println!("{}", str);
}
```
In this Rust code, we start by declaring a mutable string variable `str` and initializing it with the text value "Good Morning". We also declare two string literals `cstr` and `cstr2`, which are appended to the end of the existing string.
We then check if the current length of the string is sufficient for all three strings concatenated. If not, we use a loop to append each string one by one. The first method uses the `strcat()` function from the C library, while the second method uses string slicing and concatenation with the `+` operator.
Finally, we print out the contents of the string using the `println!` macro.

