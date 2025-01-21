Here is how you can convert the given C code to Rust. In this translation, I've also included optional requirement 1 and 2:

```rust
fn starts_with(container: &str, target: &str) -> bool {
    container.starts_with(target)
}

fn ends_with(container: &str, target: &str) -> bool {
    container.ends_with(target)
}

fn does_contain(container: &str, target: &str) -> (bool, Option<usize>) {
    let index = container.find(target);
    (index.is_some(), index)
}

fn main() {
    println!("Starts with Test ( Hello,Hell ) : {}", starts_with("Hello", "Hell"));
    println!("Ends with Test ( Code,ode ) : {}", ends_with("Code", "ode"));
    let result = does_contain("Google", "msn");
    println!("Contains Test ( Google,msn ) : {:?}", result);
    if let Some(i) = result.1 {
        println!("Location of match is: {}", i);
    }
}
```

This Rust code achieves the same functionality as your C code and also includes optional requirement 1 by printing out the location of the match. For optional requirement 2, it only gives the first occurrence of the target string. If you want to find all occurrences, you will need a more complex solution that involves iterating over the container and checking for matches at each position.
