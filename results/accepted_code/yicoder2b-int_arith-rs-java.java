extern crate num;
use num::Integer;

fn main() {
    let a = i32::from_str(env::args().get(1).unwrap()).unwrap();
    let b = i32::from_str(env::args().get(2).unwrap()).unwrap();

    let sum:       num::Num<i32> = (a as num::Num<i32>) + (b as num::Num<i32>);
    let difference: num::Num<i32> = (a as num::Num<i32>) - (b as num::Num<i32>);
    let product:   num::Num<i32> = (a as num::Num<i32>) * (b as num::Num<i32>);
    let quotient:  num::Rational<i32> = (a as num::Rational<i32>) / (b as num::Rational<i32>);
    let remainder: i32 = a % b;

    println!("sum:              {}", sum);
    println!("difference:       {}", difference);
    println!("product:          {}", product);
    println!("integer quotient: {:?}", quotient);
    println!("remainder:        {}", if (a as i32).abs() > remainder.abs() { remainder } else { a % b });
}