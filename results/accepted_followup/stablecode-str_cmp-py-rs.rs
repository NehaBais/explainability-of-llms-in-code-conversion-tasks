fn compare_strings(a: &str, b: &str) {
    match a.cmp(b) {
        Ordering::Less => println!("{} is strictly less than {}", a, b),
        Ordering::Equal => println!("{} is equal to {}", a, b),
        Ordering::Greater => println!("{} is strictly greater than {}", a, b),
    }
}

compare_strings("YUP", "YUP");
compare_strings("BALL", "BELL");
compare_strings("24", "123");