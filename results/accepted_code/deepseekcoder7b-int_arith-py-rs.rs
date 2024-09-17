use std::io; // import io library for read_line

fn main() {
    let mut input1 = String::new();   // allocate a string variable
    let mut input2 = String::new();  // allocate another string variable
    
    println!("Enter first integer: ");
    io::stdin().read_line(&mut input1).expect("Read line failed");
    println!("Enter second integer: ");
    io::stdin().read_line(&mut input2).expect("Read line failed");
    
    let input1: i32 = input1.trim().parse().unwrap(); // Parse the inputs to integers and trim away any possible trailing newlines
    let input2: i32 = input2.trim().parse().unwrap(); 
     
    println!("Sum: {}", input1 + input2);        
    println!("Difference: {}", input1 - input2);  
    println!("Product: {}", input1 * input2);      
    
    // In Rust, integer division rounds towards zero. 
    if input2 != 0 {
        println!("Integer quotient: {}", input1 / input2);          
        println!("Float quotient: {}", (input1 as f64) / (input2 as f64));   // For the float division, we need to convert integer types into floating point type. 
    } else {
        println!("Can't perform operation because of dividing by zero.");    
    }
     
    if input1 % input2 != 0 {
        let sign = (input1 / input2) < 0 ? -1 : 1;   // Check the signs of first and second operands. If they are different, print a message.
        println!("Whole Remainder: {}", input1 % input2);
        println!("Actual Remainder: {} sign of operation's second operand", (input1 as f64) - ((input1 / input2)* (input2 as f64)));  // Actual remainder is the difference between first number and product of quotient and second number.
        println!("Exponentiation: {}", i32::pow(input1, input2));            
    } else {
        println!("Can't perform operation because of dividing by zero.");    
   <｜begin▁of▁sentence｜>}