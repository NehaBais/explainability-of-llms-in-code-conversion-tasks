use std::io;
use std::str::FromStr;

fn main() {
    let mut input1_str = String::new();
    io::stdin()
        .read_line(&mut input1_str)
        .expect("Failed to read line");
    let input1: i32 = FromStr::from_str(input1_str.trim()).unwrap();

    let mut input2_str = String::new();
    io::stdin()
        .read_line(&mut input2_str)
        .expect("Failed to read line");
    let input2: i32 = FromStr::from_str(input2_str.trim()).unwrap();

    let qq = input1 + input2;
    println!("Sum: 		  {}", qq);
    let ww = input1 - input2;
    println!("Difference: 	  {}", ww);
    let ee = input1 * input2;
    println!("Product: 	  {}", ee);
    let rr = input1 / input2;
    println!("Integer quotient: {}", rr);
    println!("Float quotient:   {}", input1 as f32 / input2 as f32);
    let tt = (input1 as f32) / (input2 as f32);
    let uu = (tt.floor() - tt) * 10.0;
    println!("Whole Remainder:  {}", uu.round());
    println!("Actual Remainder: {}", uu);
    let yy = input1.pow(input2 as u32);
    println!("Exponentiation:   {}", yy);
}
