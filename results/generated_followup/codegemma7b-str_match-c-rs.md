The error occurs because `index.unwrap_or(-1)` tries to negate the `usize` value, which is not allowed in Rust. To fix this, use `index.unwrap_or(usize::MAX)` to get the maximum value of `usize`.

```rs
use std::str;

fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> (bool, Option<usize>) {
    match container.find(target) {
        Some(index) => (true, Some(index)),
        None => (false, None),
    }
}

fn main() {
    println!(
        "Starts with Test ( Hello,Hell ) : {}",
        starts_with("Hello", "Hell")
    );
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code", "ode"));
    let (contains, index) = does_contain("Google", "msn");
    println!(
        "Contains Test ( Google,msn ) : {} {}",
        contains,
        index.unwrap_or(usize::MAX)
    );
}
```
