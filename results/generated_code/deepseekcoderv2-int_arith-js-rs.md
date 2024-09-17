```
fn main() {
    let mut a: u32;
    let mut b: u32;
    
    println!("Enter two integers:");
    std::io::stdin().read_line(&mut a).unwrap();
    std::io::stdin().read_line(&mut b).unwrap();
    
    //a = parse(process.argv[2], 10);
    //b = parse(process.argv[3], 10);
    
    let sum: u32;
    let difference: i32;
    let product: u32;
    let division: f64;
    let remainder: u32;
    
    if a % b != 0 {
        // If the numbers are not equal, then print their quotient and remainder.
        quotient = a / b;
        remainder = a % b;
    } else {
        division = a / b as f64;
    }
    
    if a - b > 0 {
        difference = a - b;
    } else if a - b < 0 {
        difference = -(a - b);
    } else {
        // If the numbers are equal, then print their quotient and remainder.
        division = a / b as f64;
    }
    
    let exponentiation: i32;
    
    if a == 0 || b == 1 {
        exponentiation = 0;
    } else {
        exponentiation = a ** b as u32;
    }
}
```