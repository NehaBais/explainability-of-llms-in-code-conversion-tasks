Here is how you can convert the given JavaScript code to Rust:
```rust
fn main() {
    let string_a = String::from("tacoloco");
    let string_b = String::from("co");

    // stringA starts with stringB
    let q1: bool = string_a.starts_with(&string_b);

    // stringA contains stringB
    let q2: Option<usize> = string_a.find(&string_b);

    // multiple matches
    let mut q2matches: Vec<usize> = Vec::new();
    if let Some(pos) = q2 {
        q2matches.push(pos);
        let mut start = pos + 1;
        while let Some(new_pos) = string_a[start..].find(&string_b) {
            q2matches.push(start + new_pos);
            start += new_pos + 1;
        }
    }

    // stringA ends with stringB
    let q3: bool = string_a.ends_with(&string_b);

    println!("1: Does '{}' start with '{}'? {}", &string_a, &string_b, if q1 { "Yes." } else { "No." });
    println!("2: Is '{}' contained in '{}'?", &string_b, &string_a);
    match q2 {
        Some(pos) => {
            println!("   Yes, at index {}.", pos);
            if !q2matches.is_empty() && q2matches.len() > 1 {
                println!("In fact, it happens {} times within '{}', at index{} {} {}.",
                         q2matches.len(),
                         &string_a,
                         if q2matches.len() > 1 { "es" } else { "" },
                         q2matches.iter().map(|x| x.to_string()).collect::<Vec<String>>().join(", "),
                );
            }
        },
        None => println!("No."),
    };
    println!("3: Does '{}' end with '{}'? {}", &string_a, &string_b, if q3 { "Yes." } else { "No." });
}
```
In this Rust version, the String methods `starts_with()`, `ends_with()` and `find()` are used to perform string matching. The `Option` type is used to handle cases where a match might not be found. The `while let` loop is used to find multiple matches of the second string in the first string.
