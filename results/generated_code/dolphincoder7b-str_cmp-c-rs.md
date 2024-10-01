### Pseudocode:

COMPARE_STRINGS(s1, s2)
    if s1 == s2
        PRINT "s1 and s2 are equal"
    else
        IF s1 < s2
            PRINT "s1 is less than s2"
        ELSE
            PRINT "s1 is greater than or equal to s2"

### Code in Rust:
```rust
fn compare_strings(s1: &str, s2: &str) {
    if s1 == s2 {
        println!("{} and {} are equal", s1, s2);
    } else if s1 < s2 {
        println!("{} is less than {}", s1, s2);
    } else {
        println!("{} is greater than or equal to {}", s1, s2);
    }
}
```
