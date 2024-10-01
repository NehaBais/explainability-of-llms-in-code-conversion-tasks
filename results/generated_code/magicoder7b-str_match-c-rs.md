 Here is the equivalent Rust code for your C program:

```rust
fn starts_with(container: &str, target: &str) -> bool {
    if container.len() < target.len() {
        false
    } else {
        container.starts_with(target)
    }
}

fn ends_with(container: &str, target: &str) -> bool {
    if container.len() < target.len() {
        false
    } else {
        container.ends_with(target)
    }
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
The Rust code implements the same functionality as your C code: checking if a string starts with another string or ends with another string and checking if one string contains another. The `starts_with` function uses the `str::starts_with` method which returns a boolean value indicating whether the string starts (not ends) with the given pattern. Similarly, the `ends_with` function uses the `str::ends_with` method to check if a string ends with the given pattern and the `does_contain` function uses the `contains` method which checks if a string contains another substring anywhere in it.
