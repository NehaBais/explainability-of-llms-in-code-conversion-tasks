use std::string;

fn main() {
    let c = "cat";
    let d = "dog";

    // Exact equality comparison
    if c == d {
        println!("{} is bytewise identical to {}", c, d);
    } else {
        println!("{} is bytewise different from {}", c, d);
    }

    // Lexical ordering comparison
    if c > d {
        println!("{} is lexically bytewise greater than {}", c, d);
    } else if c < d {
        println!("{} is lexically bytewise less than {}", c, d);
    } else {
        println!("{} is lexically bytewise equal to {}", c, d);
    }

    // Case-insensitive comparison with the `to_lowercase()` method
    if c.to_lowercase() == d.to_lowercase() {
        println!("{} is case-insensitively identical to {}", c, d);
    } else {
        println!("{} is case-insensitively different from {}", c, d);
    }
}
