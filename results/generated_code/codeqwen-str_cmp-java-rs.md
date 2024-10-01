Here's how you can convert the given Java code to Rust with all the requirements mentioned in the problem.

```rust
fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

fn compare(a: &str, B: &str) {
    if A == B {
        println!("'{}' and '{}' are lexically equal.", A, B);
    } else {
        println!("'{}' and '{}' are not lexically equal.", A, B);
    }

    if A.to_lowercase() == B.to_lowercase() {
        println!("'{}' and '{}' are case-insensitive lexically equal.", A, B);
    } else {
        println!("'{}' and '{}' are not case-insensitive lexically equal.", A, B);
    }

    if A.cmp(B) == std::cmp::Ordering::Less {
        println!("'{}' is lexically before '{}'.
", A, B);
    } else if A.cmp(B) == std::cmp::Ordering::Greater {
        println!("'{}' is lexically after '{}'.
", A, B);
    }

    if A.cmp(B) != std::cmp::Ordering::Less {
        println!("'{}' is not lexically before '{}'.
", A, B);
    }
    if A.cmp(B) != std::cmp::Ordering::Greater {
        println!("'{}' is not lexically after '{}'.
", A, B);
    }

    match A.cmp(B) {
        std::cmp::Ordering::Equal => println!("The lexical relationship is: 0"),
        _ => (),
    };

    match A.to_lowercase().cmp(&B.to_lowercase()) {
        std::cmp::Ordering::Equal => println!("The case-insensitive lexical relationship is: 0"),
        _ => (),
    };
}
```

This Rust code has the same functionality as the Java code provided in terms of string comparison. However, please note that this Rust code assumes that all numbers are floating point values when comparing them with strings and it doesn't treat "5" and "5.0" as equal (unlike Java). If you want these to be considered equal, you need to convert them to the same type before comparing.
