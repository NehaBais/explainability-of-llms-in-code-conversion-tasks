```
use std::string;
fn main() {
    let mut s = String::from("12345678");
    s.insert(0, "0".to_string());
    println!("{}", s);
}
```
Note: The `insert` method is used to insert a string at a specific index in another string. In this case, it is inserting the string `"0"` at the beginning of the string `s`. The `println!` macro is used to print the resulting string to the console.
