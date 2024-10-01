use std::cmp::Ordering;

fn demo_compare<T>(a: T, b: T)
where
    T: Ord + Copy + AsRef<str>,
{
    println!("{} and {} are {:?} equal.", a, b, (a == b));
    println!("{} and {} are {:?}inequal.", a, b, (a != b));
    match a.cmp(&b) {
        Ordering::Less => println!(r#"{} is lexically ordered before {}"#, a, b),
        Ordering::Greater => println!(r#"{} is lexically ordered after {}"#, a, b),
        _ => (),
    }
}

fn main() {
    let a = std::env::args().nth(1).unwrap_or("1.2.Foo".to_string());
    let b = std::env::args().nth(2).unwrap_or("1.3.Bar".to_string());

    // Case-sensitive comparisons.
    demo_compare(a, b);

    // Case-insensitive comparisons by folding both strings to a common case.
    let mut a = a.to_lowercase();
    let mut b = b.to_lowercase();
    demo_compare(a, b);

    // Numeric comparisons; here 'f64' could be any type for which the relevant parsing is defined, eg i32, u64, etc.
    match a.parse::<f64>().unwrap() {
        Ok(numA) => {
            if let Ok(numB) = b.parse::<f64>() {
                demo_compare(numA, numB);
            }
        }
        Err(_) => (),
    }
}
