fn main() {
    let mut a = String::from("0");
    let mut b = String::from("0");

    if args.len() < 2 {
        println!("Please provide two operands.");
        return;
    }

    a = &args[1];
    b = &args[2];

    let a: i32 = a.parse().unwrap();
    let b: i32 = b.parse().unwrap();

    println!("The sum of {} and {} is {}", a, b, a + b);
    println!("The difference between {} and {} is {}", a, b, a - b);
    println!("The product of {} and {} is {}", a, b, a * b);
    // In rust, division truncates towards zero by default. To indicate towards negative infinity or positive infinity, you can use the option enum in the printf function.
    println!("The quotient of {} divided by {} is {}", a, b, a / b as i32);
    // Rust does not have a direct equivalent for C's modulus operator. Hence we use a workaround using absolute values and then applying the modulus operation between them.
    let sign_a = a.abs() / a;
    let sign_b = b.abs() / b;
    if (sign_a < 0 && sign_b > 0) || (sign_a > 0 && sign_b < 0) {
        println!("The modulus of {} and {} is {}", a, b, a % b);
    } else {
        println!("The modulus of {} and {} does not have the same sign", a, b);
    }
}
