use std::io;

fn main() {
    let mut input1 = String::new();
    print!("Enter first number: ");
    io::stdout().flush().unwrap();
    io::stdin()
        .read_line(&mut input1)
        .expect("Failed to read line");
    let _input1: i32 = input1.trim().parse().unwrap();

    let mut input2 = String::new();
    print!("Enter second number: ");
    io::stdout().flush().unwrap();
    io::stdin()
        .read_line(&mut input2)
        .expect("Failed to read line");
    let _input2: i32 = input2.trim().parse().unwrap();

    let qq = _input1 + _input2;
    println!("Sum: 		  {}", qq);

    let ww = _input1 - _input2;
    println!("Difference: 	  {}", ww);

    let ee = _input1 * _input2;
    println!("Product: 	  {}", ee);

    let rr = _input1 / _input2;
    println!("Integer quotient: {}", rr as i32);
    println!("Float quotient:   {:.1}", rr as f64);

    let tt = (f64::from(_input1)) / (_input2 as f64);
    let uu = ((tt - tt.floor()) * 10.0).round() * -1.0;
    println!("Whole Remainder:  {}", uu as i32);
    println!("Actual Remainder: {:.1}", uu as f64);

    let yy = _input1.pow(_input2 as u32);
    println!("Exponentiation:   {}", yy);
}
