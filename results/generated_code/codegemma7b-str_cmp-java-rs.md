```rust
fn main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

fn compare(A: &str, B: &str) {
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

    if A.cmp(B) < 0 {
        println!("'{}' is lexically before '{}'.", A, B);
    } else if A.cmp(B) > 0 {
        println!("'{}' is lexically after '{}'.", A, B);
    }

    if A.cmp(B) >= 0 {
        println!("'{}' is not lexically before '{}'.", A, B);
    }
    if A.cmp(B) <= 0 {
        println!("'{}' is not lexically after '{}'.", A, B);
    }

    println!("The lexical relationship is: {}", A.cmp(B));
    println!("The case-insensitive lexical relationship is: {}", A.cmp_ignore_case(B));
}
```
