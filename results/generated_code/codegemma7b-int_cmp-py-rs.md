```rust
fn main() {
    println!("Enter value of a: ");
    let a = stdin().read_line().unwrap().trim().parse::<i32>().unwrap();

    println!("Enter value of b: ");
    let b = stdin().read_line().unwrap().trim().parse::<i32>().unwrap();

    if a < b {
        println!("a is less than b");
    } else if a > b {
        println!("a is greater than b");
    } else {
        println!("a is equal to b");
    }
}
```
