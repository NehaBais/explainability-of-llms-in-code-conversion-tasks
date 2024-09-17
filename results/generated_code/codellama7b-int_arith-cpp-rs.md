```
use std::io;

fn main() -> io::Result<()> {
    let mut a = String::new();
    let mut b = String::new();
    io::stdin().read_line(&mut a)?;
    io::stdin().read_line(&mut b)?;
    let a: i32 = a.trim().parse()?;
    let b: i32 = b.trim().parse()?;
    println!("a+b = {}", a + b);
    println!("a-b = {}", a - b);
    println!("a*b = {}", a * b);
    println!("a/b = {}, remainder {}", a / b, a % b);
    Ok(())
}
```
