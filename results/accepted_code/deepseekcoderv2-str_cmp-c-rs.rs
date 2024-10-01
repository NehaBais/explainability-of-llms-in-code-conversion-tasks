fn main() {
    let mut args = std::env::args();
    if let Some(arg) = args.nth(1) {
        let a = &arg;
        let b = args.next().unwrap_or(""); // Assuming there's always an argument after the first one

        println!("{}: {}", a, compare(&a, &b));
    } else {
        println!("No arguments provided.");
    }
}

fn compare(a: &str, b: &str) -> String {
    if a == b {
        "Equal".to_string()
    } else if a < b {
        "<".to_string()
    } else {
        ">".to_string()
    }
}
