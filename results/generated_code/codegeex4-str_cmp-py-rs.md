In Rust, we can use the `cmp` method for lexicographic ordering and the `eq` method to check if two strings are equal or not. Here's how you could translate your Python code to Rust:

```rust
fn compare(a: &str, b: &str) {
    println!("'{}' is of type {:?} and '{}' is of type {:?}",
             a, std::any::type_name::<&str>(), b, std::any::type_name::<&str>());

    match a.cmp(b) {
        std::cmp::Ordering::Less => println!("'{}' is strictly less than '{}'", a, b),
        std::cmp::Ordering::Equal => println!("'{}' is equal to '{}'", a, b),
        std::cmp::Ordering::Greater => println!("'{}' is strictly greater than '{}'", a, b)
    }

    if a != b {
        println!("'{}' is not equal to '{}'", a, b);
    }

    if a == b {
        println!("'{}' has the same object identity with '{}'", a, b);
    }
}

fn compare_case_insensitive(a: &str, b: &str) {
    println!("'{}' is of type {:?} and '{}' is of type {:?}",
             a, std::any::type_name::<&str>(), b, std::any::type_name::<&str>());

    if a.eq_ignore_ascii_case(b){
        println!("'{}' is equal to '{}' ignoring ASCII case", a, b);
    } else {
        println!("'{}' is not equal to '{}' ignoring ASCII case", a, b);
    }
}

fn compare_numbers(a: &str, b: &str) {
    match (a.parse::<i32>(), b.parse::<i32>()) {
        (Ok(a), Ok(b)) => println!("'{}' is {} than '{}'", a, if a < b { "less" } else { "greater" }, b),
        _ => println!("Cannot compare '{}' and '{}'. One or both are not valid integers.", a, b)
    }
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare_case_insensitive("YUP", "yup");
    compare_numbers("123", "24");
}
```

This code will print out whether two strings are equal, not equal or ordered differently. Note that in Rust there is no direct equivalent to Python's `is` operator for checking object identity because Rust uses a different memory model.

For case insensitive comparisons you can use the `eq_ignore_ascii_case` method:


This code checks whether two strings are equal when ASCII letters are ignored. Please be aware that this function will only work correctly for ASCII characters.

For numeric strings comparison, Rust treats the string as text and not as numbers. For example `'24'` is greater than `'123'` because `2` is greater than `1`. If you want to compare them as numbers, you'll need to parse them into integers or floats before comparing. Here's a simple way of doing that:


This code will print whether the number represented by `a` is less than or greater than the number represented by `b`. If either string cannot be parsed into an integer, it'll print out a warning message.
