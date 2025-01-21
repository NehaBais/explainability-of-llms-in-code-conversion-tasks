Here is how you can implement the same functionality in Rust:

```rust
fn compare(a: &str, b: &str) {
    println!("{:?} is of type {:?} and {:?} is of type {:?}", a, a.type_id(), b, b.type_id());

    if a <  b {      println!("{:?} is strictly less than {:?}", a, b)}
    if a <= b {      println!("{:?} is less than or equal to {:?}", a, b)}
    if a >  b {      println!("{:?} is strictly greater than {:?}", a, b)}
    if a >= b {      println!("{:?} is greater than or equal to {:?}", a, b)}

    // Case sensitive comparison
    if a == b {      println!("{:?} is case-sensitive equal to {:?}", a, b)}
    if a != b {      println!("{:?} is not case-sensitive equal to {:?}", a, b)}

    // Case insensitive comparison using .eq_ignore_ascii_case()
    let lower_a = a.to_lowercase();
    let lower_b = b.to_lowercase();

    if lower_a == lower_b {  
        println!("{:?} is case-insensitive equal to {:?}", a, b) 
    }
    if lower_a != lower_b {
        println!("{:?} is not case-insensitive equal to {:?}", a, b)
    }

    // Comparing numeric strings
    match (a.parse::<i32>(), b.parse::<i32>()) {
        (Ok(a_num), Ok(b_num)) => {
            if a_num <  b_num {      println!("{:?} is strictly less than {:?}", a, b)}
            if a_num <= b_num {      println!("{:?} is less than or equal to {:?}", a, b)}
            if a_num >  b_num {      println!("{:?} is strictly greater than {:?}", a, b)}
            if a_num >= b_num {      println!("{:?} is greater than or equal to {:?}", a, b)}
        },
        _ => println!("Both strings cannot be parsed into numeric form"),
    }
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
}
```

This Rust code works by comparing two string references (i.e., `&str`), which is similar to Python's string comparison. It also demonstrates how to perform case-insensitive comparisons using the `.to_lowercase()` method.

For numeric strings, it tries to parse them into integers with the `.parse::<i32>()` function. If both parsing attempts are successful, it proceeds with the same kind of comparisons as before, otherwise, it informs that both strings cannot be parsed into numbers.
