This problem cannot be solved directly in Java because there is no built-in operator for exponentiation or modulus. For the remainder, it usually depends on whether the signs of the two numbers are different. But there's no built-in way to achieve this in Rust either.

A common approach would be using a library like num (for arithmetic operations) and num-traits (which includes some basic properties like "rounding towards zero" for integer division).

Here is the equivalent code using num:
```rust
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
```

Note that the Rational type from num-traits implements the Num trait so we can divide two integers. The output format is specified as (?) because it depends on how you want to handle rounding for integer division.
