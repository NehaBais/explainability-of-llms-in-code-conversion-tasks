fn main() {
    // Case-sensitive comparisons.
    let a = if args.len() > 1 { &args[1] } else { "1.2.Foo" };
    let b = if args.len() > 2 { &args[2] } else { "1.3.Bar" };
    demo_compare(a, b, "lexically");

    // Case-insensitive comparisons by folding both strings to a common case.
    let a = a.to_lowercase();
    let b = b.to_lowercase();
    demo_compare(a, b, "lexically");

    // Numeric comparisons; here 'double' could be any type for which the
    // relevant >> operator is defined, eg int, long, etc.
    let num_a: f64 = if args.len() > 1 { a.parse().unwrap() } else { 1.2 };
    let num_b: f64 = if args.len() > 2 { b.parse().unwrap() } else { 1.3 };
    demo_compare(num_a, num_b, "numerically");
}

fn demo_compare<T>(a: T, b: T, semantically: &str) {
    println!("{} and {} are {} exactly {} equal.", a, b, if a == b { "" } else { "not " }, semantically);
    println!("{} and {} are {} not unequal.", a, b, if a != b { "" } else { "not " }, semantically);
    println!("{} is {} ordered before {}.", a, if a < b { "" } else { "not " }, b);
    println!("{} is {} ordered after {}.", a, if a > b { "" } else { "not " }, b);
}