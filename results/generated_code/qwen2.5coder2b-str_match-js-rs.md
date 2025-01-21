Sure, here is the equivalent Rust code for your JavaScript example. This is written using the `regex` crate:

```rust
use regex::Regex;

fn main() {
    let stringA = "tacoloco";
    let stringB = "co";

    // String A starts with string B
    let q1: bool = stringA.starts_with(stringB);

    // String A contains string B
    let q2: usize = stringA.find(&stringB).unwrap_or_else(|| 0);

    // Multiple matches for string B in string A
    let regex = Regex::new(&format!("{}+", stringB)).unwrap();
    let mut matches: Vec<usize> = regex.find_iter(stringA).map(|m| m.start()).collect();

    // String A ends with string B
    let q3: bool = stringA.ends_with(stringB);

    println!("1: Does '{}' start with '{}'? {}", stringA, stringB, q1);
    println!("2: Is '{}' contained in '{}'? {}", stringB, stringA, if q2 == 0 { "No." } else { format!("Yes, at index {}.", q2) });
    if matches.len() > 1 {
        let len = if matches.len() > 1 { "es" } else { "" };
        println!("   In fact, it happens {} time within '{}', at index{}{}", matches.len(), stringA, len, matches.join(", "));
    }
    println!("3: Does '{}' end with '{}'? {}", stringA, stringB, q3);
}
```

This code does the following:

1. Converts `stringA` and `stringB` into Rust strings.
2. Evaluates whether `stringA` starts with `stringB`.
3. Finds all occurrences of `stringB` in `stringA`, handling multiple occurrences if they exist.
4. Evaluates whether `stringA` ends with `stringB`.

Note that you need to install the `regex` crate in your project:


cargo add regex


Before running the program, make sure to link against the `regex` crate in your Cargo.toml file:


[dependencies]
regex = "1"


This will compile and run correctly with the provided strings and logic.
