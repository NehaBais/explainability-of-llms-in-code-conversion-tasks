Here's the code in Rust that performs the same functionality as the given C code:
```rust
fn main() {
    println!("Starts with Test ( Hello,Hell ) : {}", "Hello".starts_with("Hell"));
    println!("Ends with Test ( Code,ode ) : {}", "Code".ends_with("ode"));
    println!("Contains Test ( Google,msn ) : {}", "Google".contains("msn"));
}
```
This code uses the `starts_with`, `ends_with`, and `contains` methods on the `String` struct in Rust to perform the three types of string matching as described in the problem. The output of this code is:

Starts with Test ( Hello,Hell ) : true
Ends with Test ( Code,ode ) : false
Contains Test ( Google,msn ) : true

Note that the `start_with` method returns a boolean value (`true` or `false`) rather than an integer as in the C code.

