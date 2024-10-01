fn compare(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a == b,
        a != b,
        a > b,
        a < b,
        a >= b,
        a <= b,
    );
}

fn compare_case(a: &str, b: &str) {
    println!(
        "{} {} {} {} {} {} {}",
        a,
        a.eq_ignore_ascii_case(b),
        !a.eq_ignore_ascii_case(b),
        !a.ge_ignore_ascii_case(&b),
        a < b,
        !a.le_ignore_ascii_case(&b),
        !a.lt_ignore_ascii_case(b)
    );
}

fn main() {
    let mut args: Vec<String> = std::env::args().skip(1).collect();

    while !args.is_empty() {
        let a = args.remove(0);
        let b = args.remove(0);

        compare(&a, &b);
        compare_case(&a, &b);
    }
}
