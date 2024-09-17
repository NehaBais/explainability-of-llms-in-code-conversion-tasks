use std::io; // We import the io library to work with inputs and outputs

fn main() {
    println!("Enter value of a: ");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("Failed to read line");
    
    println!("Enter value of b: ");
    let mut b = String::new();
    io::stdin().read_line(&mut b).expect("Failed to read line");

    let a: i32 = a.trim().parse().expect("Please type a integer value!");  // convert input string to int, we expect errors in case of invalid inputs
    let b: i32 = b.trim().parse().expect("Please type a integer value!");  
    
    if a < b {
        println!("a is less than b");
   <｜begin▁of▁sentence｜>}
    } else if a > b {
       println!("a is greater than b");
    } else if a == b {
       println!("a is equal to b");