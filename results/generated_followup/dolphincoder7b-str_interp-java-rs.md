The error occurs because Rust does not support global variables like Java's `let` keyword. Instead, it requires declaring variables using `const`, `static`, or `pub static`. The corrected code block will be as follows:
```rust
const ADJECTIVE : &str = "little";
fn main() {
    let lyric  = format!("Mary had a {} lamb", ADJECTIVE);
    println!("{}", lyric); // prints Mary had a little lamb
}
```
This code uses the `static` keyword to declare a constant variable named `ADJECTIVE`. Then, it defines a function called `main`, which creates a string using the format! macro and assigns it to the variable `lyric`. Finally, it prints the value of `lyric`.
