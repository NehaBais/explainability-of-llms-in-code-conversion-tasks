
Here's the Rust equivalent of the given C code:
```rust
use std::ffi::CStr;
use std::os::raw::c_char;

fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn contains(container: &str, target: &str) -> bool {
    container.contains(target)
}

fn main() {
    let container = "Hello";
    let target = "Hell";
    println!("Starts with Test ( {} , {} ) : {:?}", container, target, starts_with(container, target));

    let container = "Code";
    let target = "ode";
    println!("Ends with Test ( {} , {} ) : {:?}", container, target, ends_with(container, target));

    let container = "Google";
    let target = "msn";
    println!("Contains Test ( {} , {} ) : {:?}", container, target, contains(container, target));
}
```
Note that the Rust equivalent of `strncmp` is `starts_with`, which returns a boolean value indicating whether the first string starts with the second string. Similarly, `ends_with` returns a boolean value indicating whether the first string ends with the second string. The `contains` function returns a boolean value indicating whether the second string is contained within the first string.
