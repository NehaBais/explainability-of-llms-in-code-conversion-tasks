fn main() {
    let input1 = 18;
    let input2 = 7;

    let qq = input1 + input2;
    println!("Sum: {:?}", qq);
    
    let ww = input1 - input2;
    println!("Difference: {:?}", ww);

    let ee = input1 * input2;
    println!("Product: {:?}", ee);

    let rr = input1 / input2;
    println!("Integer quotient: {:?}", rr);

    let uu = input1 % input2;
    println!("Remainder: {:?}", uu);

    let yy = input1.pow(input2);
    println!("Exponentiation: {:?}", yy);
}