Below is the Rust version of your JavaScript code. This Rust code does the same as your JavaScript code - it determines if two strings meet specific conditions (i.e., starting with, containing, or ending with a specified string)).

```rust
fn main() {
    let stringA = "tacoloco";
    let stringB = "co";

    // Determine if stringA starts with stringB
    let start_with = stringA.starts_with(stringB);

    // If stringA starts with stringB, print a message indicating so
    if start_with {
        println!("Does '{}' start with '{}'? Yes.", stringA, stringB);
    } else {
        println!("Does '{}' start with '{}'? No.", stringA, stringB);
    }

    // Determine if stringB is contained in stringA
    let contains = stringA.contains(stringB));

    if contains {
        println!("Does '{}' contain '{}'? Yes, at index {}.", stringA, stringB, starts_with ? stringA[..stringB.len():].find(stringB) : -1);
    } else {
        println!("Does '{}' contain '{}'? No.", stringA, stringB);
    }

    // Determine if stringA ends with stringB
    let ends_with = stringA.ends_with(stringB));

    if ends_with {
        println!("Does '{}' end with '{}'? Yes.", stringA, stringB);
    } else {
        println!("Does '{}' end with '{}'? No.", stringA, stringB);
    }
}
```
This code takes the same inputs and outputs as your JavaScript code. It does so by using Rust's built-in methods for strings (i.e., start_with(), contains(), ends_with())).
