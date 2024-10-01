The equivalent code in Rust would be:

```rust
use std::io;

fn main() {
    let mut s = String::new();
    match io::stdin().read_line(&s) {
        Ok(_) => {}, 
        Err(err) => println!("Error reading line: {:?}", err),
    };
    let nbr1 : i32 = s.trim().parse().unwrap();
    s.clear();
    match io::stdin().read_line(&s) {
        Ok(_) => {}, 
        Err(err) => println!("Error reading line: {:?}", err),
    };
    let nbr2 : i32 = s.trim().parse().unwrap();
    if nbr1<nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } 
    else if nbr1>nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    }
    else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}
```
In this Rust code, we use the read_line method from io module to take user input. We use match statement to handle possible errors from reading the line and also unwrap the parsed integers. Note that in Rust, we need explicit type declarations unlike Java where we can omit it. Also Rust doesn't have native buffered reader, so we are manually clearing the string buffer after each read_line call.
