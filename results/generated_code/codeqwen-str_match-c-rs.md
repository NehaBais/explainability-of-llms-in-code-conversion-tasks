Here is the Rust version of your C code:

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
    println!("Starts with Test ( Hello,Hell ) : {}", starts_with("Hello","Hell"));
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code","ode"));
    println!("Contains Test ( Google,msn ) : {}", does_contain("Google","msn"));
}
```

This code defines the three string matching functions that were defined in your C program. The `starts_with`, `ends_with`, and `does_contain` functions use Rust's native string methods, which automatically handle the conversion between Rust's string type (`String`) and C-style strings (`&str`).

In the main function, we print out the results of the three tests. Note that in order to get a boolean value from these methods (instead of an integer), we use Rust's `{}` placeholder for formatting.

Rust also automatically manages memory allocation and deallocation for us, so there is no need to manually allocate and free memory as you do with C. However, when it comes to managing resources that have external dependencies (like files or network connections), you will need to use Rust's ownership model and borrowing to ensure that resources are not accidentally freed while they are still in use.
