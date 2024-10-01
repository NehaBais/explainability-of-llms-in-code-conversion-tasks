 Here is the Rust version of your Golang code:

```rust
fn match_strings(mut first: String, second: &str) {
    println!("1. {} starts with {}: {}", 
        first, second, first.starts_with(second));
    if let Some(i) = first.find(second) {
        println!("2. {} contains {}, at location {}:", first, second, i);
        loop {
            match first[i + 1..].find(second) {
                None => break,
                Some(j) => {
                    println!("2.2. at location {}", j+1);
                    continue;
                }
            }
        }
        println!("2.2. and that's all");
    } else {
        println!("2. {} contains {} (None found)", first, second)
    };
    println!("3. {} ends with {}: {}", 
        first, second, first.ends_with(second));
}

fn main() {
    match_strings(String::from("abracadabra"), "abr");
}
```

This Rust code does the same thing as your Golang code: it checks if the given strings match according to the different types you specified. The `match` keyword in Rust is used instead of a bunch of `if` statements for pattern matching, and the format string syntax is more explicit than in Golang.
