Sure, here's the equivalent Rust code:
```rust
fn main() {
    let a = true;
    let b = false;
    println!("a and b: {}", a && b); // "&&" is the logical AND operator
    println!("a or b: {}", a || b); // "||" is the logical OR operator
    println!("not a: {}", !a); // "!" is the logical NOT operator
}
```
In Rust, we use `main` as the entry point of our program. Inside this function, we declare two variables `a` and `b`, both initialized to `true` and `false`. Then, we print out the results of three logical expressions: `a && b`, `a || b`, and `!a`. These expressions are evaluated in order, so the first one is equivalent to `print('a and b:', a and b)`. The syntax `!` denotes logical NOT in Rust.

// We need to export functions from the module if they're intended for use outside of the current crate
pub fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}

This version of the code has been moved into a module named "logic", which is why it's public. Now, if you want to use this logic function in your Rust project, you can import it using the `use` keyword like so:

use crate::logic;
// The above line imports all functions from the "logic" module into your current scope.

By using this format, you ensure that your logic functions are accessible to other parts of your code.
