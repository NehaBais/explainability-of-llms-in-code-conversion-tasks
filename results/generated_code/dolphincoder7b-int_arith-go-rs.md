Sure, here's the equivalent Rust code:
```
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");

    let values: Vec<i32> = input.trim().split(' ').map(|s| s.parse::<i32>().unwrap()).collect();
    if values.len() != 2 {
        println!("Please provide exactly two integers.");
        return;
    }

    let a = values[0];
    let b = values[1];

    println!("{} + {} = {}", a, b, a + b);
    println!("{} - {} = {}", a, b, a - b);
    println!("{} * {} = {}", a, b, a * b);
    println!("{} / {} = {}", a, b, a / b);   // truncates towards 0
    println!("{} %% {} = {}", a, b, a % b);  // same sign as first operand
     // no exponentiation operator
}
```
This Rust code uses the `std::io` module for reading from standard input and collecting user input. It also uses the `Vec<i32>` type to store the integers entered by the user. The `read_line()` function is used to read a line of input from standard input, and the `trim()` and `split(' ')` functions are used to split the input into two integers. Finally, the remaining operations are performed using integer arithmetic.
Note: This Rust code does not include error handling and assumes that the user will enter exactly two integers on one line. If you need error handling, it can be added by adding a `match` statement to handle potential errors from parsing the input.
