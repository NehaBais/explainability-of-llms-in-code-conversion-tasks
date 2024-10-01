```rust
fn compare(a: &str, b: &str) {
    println!(
        "\"{}\" is of type {:?} and \"{}\" is of type {:?}",
        a,
        a.len(),
        b,
        b.len()
    );

    if a < b {
        println!("{:?} is strictly less than {:?}", a, b)
    }
    if a <= b {
        println!("{:?} is less than or equal to {:?}", a, b)
    }
    if a > b {
        println!("{:?} is strictly greater than {:?}", a, b)
    }
    if a >= b {
        println!("{:?} is greater than or equal to {:?}", a, b)
    }
    if a == b {
        println!("{:?} is equal to {:?}", a, b)
    }
    if a != b {
        println!("{:?} is not equal to {:?}", a, b)
    }
    if a == b {
        println!("{:?} has object identity with {:?}", a, b)
    }
    if a != b {
        println!("{:?} has negated object identity with {:?}", a, b)
    }
}

compare("YUP", "YUP");
compare("BALL", "BELL");
compare("24", "123");
compare(24, 123);
compare(5.0, 5);
```
