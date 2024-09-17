```
fn main() {
    let mut a = String::new();
    println!("Enter value of a: ");
    io::stdin().read_line(&mut a).expect("Failed to read line");
    let mut b = String::new();
    println!("Enter value of b: ");
    io::stdin().read_line(&mut b).expect("Failed to read line");

if a.parse::<i32>().unwrap() < b.parse::<i32>().unwrap() {
    println!("a is less than b");
} else if a.parse::<i32>().unwrap() > b.parse::<i32>().unwrap() {
    println!("a is greater than b");
} else if a.parse::<i32>().unwrap() == b.parse::<i32>().unwrap() {
    println!("a is equal to b");
}
```
You can also use the `match` keyword instead of `if-else` statements for more concise and readable code. Here's an example:
```
fn main() {
    let mut a = String::new();
    println!("Enter value of a: ");
    io::stdin().read_line(&mut a).expect("Failed to read line");
    let mut b = String::new();
    println!("Enter value of b: ");
    io::stdin().read_line(&mut b).expect("Failed to read line");

match (a.parse::<i32>(), b.parse::<i32>()){
        (Some(a), Some(b)) => {
            if a < b {
                println!("a is less than b")
            } else if a > b {
                println!("a is greater than b")
            } else {
                println!("a is equal to b");
            }
        },
        _ => () // Do nothing if the conversion fails
    }
```
Note that in Rust, you can use the `parse` method to convert a string to an integer. The `unwrap()` method is used to return the value inside the `Option` returned by the `parse` method. If the conversion fails, the program will panic with an error message.
