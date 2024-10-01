use std::cmp::Ordering;

fn compare(a: &str, b: &str) {
    let result = a.cmp(b);

    match result {
        Ordering::Equal => println!("{} is equal to {}", a, b),
        Ordering::Less => println!("{} is less than {}", a, b),
        Ordering::Greater => println!("{} is greater than {}", a, b),
    }
}

fn compare_case(a: &str, b: &str) {
    let result = a.casecmp(b);

    match result {
        Ordering::Equal => println!("{} is equal to {} (ignoring case)", a, b),
        Ordering::Less => println!("{} is less than {}", a, b),
        Ordering::Greater => println!("{} is greater than {}", a, b),
    }
}

fn main() {
    let args: Vec<String> = std::env::args().collect();

    if args.len() < 3 {
        println!("Usage: rust-c-compare <string_a> <string_b>");
        return;
    }

    let a = &args[1]];
    let b = &args[2]];

    compare(a, b);
    compare_case(a, b);
}