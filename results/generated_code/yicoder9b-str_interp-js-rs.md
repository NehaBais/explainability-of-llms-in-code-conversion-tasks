In Rust there is no built-in method for string interpolation as in Javascript. However, you can achieve similar result using format! macro from the std::fmt module which allows to replace placeholders with variables values:

Here's how you can convert your given JavaScript code into Rust: 
```rust
let original = "Mary had a X lamb";
let little = String::from("little");
let replaced : String = format!("{}", original.replace("X", &*little));
println!("{}", replaced);  // prints: Mary had a little lamb 
```
In this code, the replace() function is called on `original` string which replaces "X" with value of `little`. This whole expression is then passed as an argument to format! macro, which inserts the result in place of the {} placeholder. The resulting `replaced` string is then printed out.
The output would be: "Mary had a little lamb".
