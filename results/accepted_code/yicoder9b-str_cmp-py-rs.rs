fn compare(a: &str, b: &str) {
    println!(
        "\n{:?} is of type {:?} and {:?} is of type {:?}",
        a,
        ::std::any::type_name::<&str>(),
        b,
        ::std::any::type_name::<&str>()
    );

    if a < b {
        println!("{:?} is strictly less than {:?}", a, b)
    };
    if a <= b {
        println!("{:?} is less than or equal to {:?}", a, b)
    };
    if a > b {
        println!("{:?} is strictly greater than {:?}", a, b)
    };
    if a >= b {
        println!("{:?} is greater than or equal to {:?}", a, b)
    };
    if a == b {
        println!("{:?} is equal to {:?}", a, b)
    };
    if a != b {
        println!("{:?} is not equal to {:?}", a, b)
    };

    compare_case_insensitive(a, b);
}

fn compare_case_insensitive(a: &str, b: &str) {
    let lower_a = a.to_lowercase();
    let lower_b = b.to_lowercase();

    if lower_a < lower_b {
        println!("{:?} (as lowercase) is strictly less than {:?}", a, b)
    };
    if lower_a <= lower_b {
        println!("{:?} (as lowercase) is less than or equal to {:?}", a, b)
    };
    if lower_a > lower_b {
        println!("{:?} (as lowercase) is strictly greater than {:?}", a, b)
    };
    if lower_a >= lower_b {
        println!("{:?} (as lowercase) is greater than or equal to {:?}", a, b)
    };
    if lower_a == lower_b {
        println!("{:?} (in lowercase form) is equal to {:?}", a, b)
    };
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    // Strings are compared based on their numeric values in Rust.
    compare("24", "123");
}
