use std::cmp::Ordering;
fn main(args: Vec<String>) {
    // Case-sensitive comparisons.
    let a = if args.len() > 1 { "1.2.Foo" } else { &args[0] };
    let b = if args.len() > 2 { "1.3.Bar" } else { &args[1] };
    demo_compare(a, b);
}
fn demo_compare<T: AsRef<str>>(a: T, b: T) {
    match a.as_ref().cmp(b.as_ref()) {
        Ordering::Equal => println!("{} and {} are exactly equal.", a, b),
        Ordering::Less => println!("{} is ordered before {}.", a, b),
        Ordering::Greater => println!("{} is ordered after {}.", a, b),
    }
    match a.as_ref().ne(&b) {
        true => println!("{} and {} are not equal.", a, b),
        false => println!("{} and {} are exactly equal.", a, b),
    };
}
