This error arises due to different mutability of reference (`&String` as opposed to `&mut String`) provided by read_line() method, which expects a mutable reference but it is getting a constant reference (`&String`). Hence, type mismatch error occurs. 

We should make sure that `s` is mutable (`mut`) in the if conditions because it will get changed when we compare the numbers.

Here is the corrected Rust code:

```rs
use std::io;

fn main() {
    let mut s = String::new();
    match io::stdin().read_line(&s) {
        Ok(_) => {},
        Err(err) => println!("Error reading line: {:?}", err),
    };
    let nbr1: i32 = s.trim().parse().unwrap();
    s.clear();
    match io::stdin().read_line(&s) {
        Ok(_) => {},
        Err(err) => println!("Error reading line: {:?}", err),
    };
    let nbr2: i32 = s.trim().parse().unwrap();
    if let Err(e1) = &nbr1 <&nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if let Err(e2) = &nbr1 >&nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
This code does the same as before but with typecasts. The `if let Err(e) = &nbr1 <&nbr2` block is equivalent to error handling in Python's 'try except' mechanism. It checks for errors from reading user input, and prints an error message if there are any. If no errors occur during the comparisons, it will print a message accordingly.
