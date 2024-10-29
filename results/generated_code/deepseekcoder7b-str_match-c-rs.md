The Rust code equivalent to the provided C code is as follows. For the purpose of this example, I assume that we only need an implementation for the parts where checking if a string starts with another one (starts_with), ends with another one (ends_with) and contains another one (does_contain).

```rust
fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    println!("Starts with Test  (Hello,Hell): {}", starts_with("Hello","Hell"));
    println!("Ends with Test  (Code,ode): {}", ends_with("Code","ode"));
    println!("Contains Test  (Google,msn): {}", does_contain("Google","msn"));
}
```
For the optional requirements:
1. For part 2 of the problem, Rust doesn't provide a method to find all occurrences. We have to manually iterate over string and keep track of indices ourselves which is not simple. If you need this functionality, consider using a library such as `regex` in Rust for pattern matching operations.
2. For part 1 of the problem, Rust provides built-in methods (str::starts_with) that cover all the requirements mentioned. No manual handling required.

