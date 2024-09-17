## Solution:

```rust
use std::io;
use std::process::exit;
fn main() {

let mut first_number = String::new();
let mut second_number = String::new();
print!("enter the first number :");
if let Err(_) = io::stdin().read_line(&mut first_number){println!("error reading from input.");exit(1)}
first_number.pop();
print!("enter the second number :");
if let Err(_) = io::stdin().read_line(&mut second_number){println!("error reading from input.");exit(1)}
second_number.pop();
let first_num:i32=first_number.trim().parse().expect("could not parse the number");
let sec_num:i32=second_number.trim().parse().expect("could not parse the number");
//test for less than
if first_num<sec_num{println!("{} is less than {}",first_num,sec_num);}
//test for equality
if first_num==sec_num{println!("{} is equal to {}",first_num,sec_num);}
//test for greater-than
if first_num>sec_num{println!("{} is greater than {}",first_num,sec_num);}
}
```

