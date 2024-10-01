```rust
fn starts_with(container: &str, target: &str) -> bool {
    if container.len() < target.len() {
        return false;
    }
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    if container.len() < target.len() {
        return false;
    }
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> Option<usize> {
    container.find(target)
}

fn main() {
    println!("Starts with Test ( Hello,Hell ) : {}", starts_with("Hello", "Hell"));
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code", "ode"));
    match does_contain("Google", "msn") {
        Some(index) => println!("Contains Test ( Google,msn ) : true at position: {}", index),
        None => println!("Contains Test ( Google,msn ) : false"),
    }
}
```

Some notes about the Rust version:
- The `startsWith`, `endsWith`, and `doesContain` functions in C have been replaced with equivalent methods on `str`.
- The `main` function now uses `println!` to print output. In Rust, `printf` style formatting is not used.
- For multiple occurrences of a string for part 2, the `does_contain` function returns an Option<usize> indicating the starting position of the match or None if no match was found. This allows the caller to decide how to handle multiple occurrences.
