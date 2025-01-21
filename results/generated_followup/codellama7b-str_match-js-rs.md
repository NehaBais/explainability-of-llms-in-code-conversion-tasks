The errors occur due to the use of `~` as an operator instead of using `!` for bitwise not, which is used to convert a boolean value into a number. Additionally, there are several type mismatches in the code, such as trying to index a string with an integer (which requires a usize) and comparing a string slice with a string literal (which requires a str).

The fix involves replacing `~` with `!`, using `usize` instead of `i32` for the index type, and changing the comparison to use `str == str` instead of `str[0] == 'a'`.
```rust
use std::io;

fn main() {
    let string = "hello world";
    let word = "world";

    if string.contains(word) {
        println!("{} contains {}", string, word);
    } else {
        println!("{} does not contain {}", string, word);
    }
}
```
