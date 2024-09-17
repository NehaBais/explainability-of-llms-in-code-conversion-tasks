Here's the converted code in Rust:
```
use std::io;
fn main() {
    println!("Enter two integers");
    let mut nbr1 = String::new();
    io::stdin().read_line(&mut nbr1).unwrap();
    let nbr1: i32 = match nbr1.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    let mut nbr2 = String::new();
    io::stdin().read_line(&mut nbr2).unwrap();
    let nbr2: i32 = match nbr2.trim().parse() {
        Ok(num) => num,
        Err(_) => panic!("Please enter a valid integer"),
    };

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
This code uses the `io` module to read two integers from the user and then compares them using the `<`, `>` and `==` operators. The `match` statement is used to convert the strings into integers, and if the conversion fails, a panic is raised. Finally, an `if-else` block is used to print out the appropriate message based on the comparison result.

