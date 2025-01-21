fn demo_compare<T>(a: &T, b: &T) where T: std::cmp::Ord + std::cmp::PartialEq + std::fmt::Display {
    match a.partial_cmp(b) {
        Some(std::cmp::Ordering::Less) => println!("{} is less than {}.", a, b),
        Some(std::cmp::Ordering::Greater) => println!("{} is greater than {}.", a, b),
        _ => (), 
    }
    match a == b {
        true => println!("{} and {} are exactly equal.", a, b),
        false => println!("{} and {} are not equal.", a, b),
    }
}