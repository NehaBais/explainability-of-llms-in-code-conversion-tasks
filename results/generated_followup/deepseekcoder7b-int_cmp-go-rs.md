The error message indicates that Rust does not recognize certain special Unicode characters, possibly due to incorrect encoding or language settings on the system. The "fix" is quite simple - remove these special characters from the code. 

Here's your corrected code with no special characters:
```rs
use std::io;

fn main() {
    let mut n1 = String::new();
    let mut n2 = String::new();
    
    println!("enter number: ");
    io::stdin().read_line(&mut n1).expect("Read line failed");
    println!("enter number: ");
    io::stdin().read_line(&mut n2).expect("Read line failed");

    let n1: i32 = n1.trim().parse().expect("Please type a integer value!");
    let n2: i32 = n2.trim().parse().expect("Please type a integer value!");
    
    match n1.cmp(&n2) {
        std::cmp::Ordering::Less => println!("{} less than {}", n1, n2),
        std::cmp::Ordering::Equal => println!("{} equal to {}", n1, n2),
        std::cmp::Ordering::Greater => println!("{} greater than {}", n1, n2),
    }
}
```

