fn compare(a: &str, b: &str) {
    println!(
        "{} is of type {:?} and {} is of type {:?}",
        a,
        type(a),
        b,
        type(b)
    );
    if a < b {
        println!("{} is strictly less than {}", a, b);
    }
    if a <= b {
        println!("{} is less than or equal to {}", a, b);
    }
    if a > b {
        println!("{} is strictly greater than {}", a, b);
    }
    if a >= b {
        println!("{} is greater than or equal to {}", a, b);
    }
    if a == b {
        println!("{} is equal to {}", a, b);
    }
    if a != b {
        println!("{} is not equal to {}", a, b);
    }
    if a as *const str == b as *const str {
        println!("{} has object identity with {}", a, b);
    }
    if a as *const str != b as *const str {
        println!("{} has negated object identity with {}", a, b);
    }
}
fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
}
