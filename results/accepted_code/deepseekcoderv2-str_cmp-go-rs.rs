use std::string;

fn main() {
    let c = "cat";
    let d = "dog";

    // Compare bytewise equality and inequality
    if c == d {
        println!("{} is identical to {}", c, d);
    } else {
        println!("{} is not equal to {}", c, d);
    }

    // Compare strings lexically for ordering
    match string::String::cmp(c, d) {
        std::cmp::Ordering::Less => println!("{} is less than {}", c, d),
        std::cmp::Ordering::Equal => println!("{} is equal to {}", c, d),
        std::cmp::Ordering::Greater => println!("{} is greater than {}", c, d),
    }

    // Case-insensitive comparison using Rust's built-in string function for case folding
    if string::String::eq_ignore_ascii_case(c, d) {
        println!("Case insensitive: {} equals {}", c, d);
    } else {
        println!("Case insensitive: {} does not equal {}", c, d);
    }

    // Numeric string comparison (Rust will automatically interpret numbers as their numerical value when compared with other numeric values or characters)
    let a = "123";
    let b = 456;
    if a == b {
        println!("{} equals {}", a, b);
    } else {
        println!("{} does not equal {}", a, b);
    }

    // Additional string comparison using Rust's built-in library function for lexicographic ordering of strings
    let e = "apple";
    let f = "banana";
    if std::cmp::Ordering::eq(e.as_str(), f) {
        println!("{} and {} are lexically equal", e, f);
    } else {
        println!("{} and {} are not lexically equal", e, f);
    }
}
