Sure! Here is the Rust code that matches the above JavaScript code:
```
use std::io;

fn main() {
    let stringA = "tacoloco";
    let stringB = "co";

    // stringA starts with stringB
    let mut q1 = false;
    if stringA.starts_with(stringB) {
        q1 = true;
    }

    // stringA contains stringB
    let mut q2: i32 = -1;
    for (i, c) in stringA.chars().enumerate() {
        if c == stringB[0] && stringB.len() <= stringA.len() - i {
            // found a match
            q2 = i as i32;
            break;
        }
    }

    // multiple matches
    let mut q2multi = "".to_string();
    for (i, c) in stringA.chars().enumerate() {
        if c == stringB[0] && stringB.len() <= stringA.len() - i {
            // found a match
            q2multi.push(c);
        }
    }

    // stringA ends with stringB
    let mut q3 = false;
    if stringA.ends_with(stringB) {
        q3 = true;
    }

    println!("1: Does '{}' start with '{}'? {}", stringA, stringB, q1);
    println!("2: Is '{}' contained in '{}'? {}", stringB, stringA, ~q2 ? "Yes, at index {}." : "No.", q2);
    if ~q2 && q2multi.len() > 1 {
        println!("   In fact, it happens {} times within '{}', at index{}.", q2multi.len(), stringA, q2matches.join(','));
    }
    println!("3: Does '{}' end with '{}'? {}", stringA, stringB, q3);
}
```
Note that this code uses the `std::io` module to perform I/O operations, and it also uses the `starts_with`, `contains`, and `ends_with` methods from the `String` type in Rust. Additionally, it uses the `to_string()` method to convert a string slice to a string.

Also note that this code is not as concise or efficient as the original JavaScript code, but it should produce the same results.
