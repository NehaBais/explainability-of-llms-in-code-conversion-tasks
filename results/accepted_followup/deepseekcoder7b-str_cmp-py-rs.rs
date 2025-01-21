fn compare<T>(a: &str, b: &str) where T: std::cmp::PartialEq + std::fmt::Debug {  // Specify generic argument and add constraints on PartialEq and Debug traits.
    println!(
        "{} is of type {} and {} is of type {}",
        a,
        std::any::type_name::<T>(),     // Use the function `type_name` to obtain run-time type information
        b,
        std::any::type_name::<T>()      // Use the function `type_name` to obtain run-time type information
    );

    if a < b  { println!("{} is strictly less than {}", a, b) }
    if a <= b { println!("{} is less than or equal to {}", a, b) }
    if a > b  { println!("{} is strictly greater than {}", a, b) }
    if a >= b { println!("{} is greater than or equal to {}", a, b) }
    if a == b { println!-- "{} equals to {}", a, b }           // Equivalent to Python's `==` for strings
    if a != b { println!-- "{} not equals to {}", a, b}        // Equivalent to Python's `！=` for strings
}

fn main() {
  compare::<str>("YUP","YUP");
}