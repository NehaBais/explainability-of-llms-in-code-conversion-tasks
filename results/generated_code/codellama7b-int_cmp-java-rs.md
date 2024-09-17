To convert the given Java code to Rust, you can use the `std::io` module to read input from the user. You can also use the `==`, `<`, and `>` operators to compare two integers. Here's an example of how the code could be converted:
```
use std::io;

fn main() {
    let mut nbr1 = String::new();
    let mut nbr2 = String::new();

    println!("Enter the first number: ");
    io::stdin().read_line(&mut nbr1).unwrap();
    println!("Enter the second number: ");
    io::stdin().read_line(&mut nbr2).unwrap();

    let nbr1: i32 = nbr1.parse().unwrap();
    let nbr2: i32 = nbr2.parse().unwrap();

    if nbr1 < nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if nbr1 > nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
Note that this code uses the `std::io` module and the `parse()` method to convert strings to integers. It also uses the `unwrap()` method to handle any potential errors that may occur during input validation.
