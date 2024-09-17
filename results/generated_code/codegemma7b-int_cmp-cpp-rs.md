```rust
use std::io;

fn main() {
    let mut a = 0;
    let mut b = 0;

    match io::stdin().read_line().unwrap().split_whitespace().map(|x| x.parse::<i32>().unwrap()).collect::<Vec<i32>>() {
        [a, b] => (),
        _ => {
            println!("could not read the numbers");
            return;
        }
    }

    if a < b {
        println!("{} is less than {}", a, b);
    }

    if a == b {
        println!("{} is equal to {}", a, b);
    }

    if a > b {
        println!("{} is greater than {}", a, b);
    }
}
```
