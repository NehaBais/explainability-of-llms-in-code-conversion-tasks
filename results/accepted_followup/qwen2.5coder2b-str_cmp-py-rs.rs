fn compare(a: &str, b: &str) {
    println!(
        "{} is of type {} and {} is of type {}",
        a,
        std::any::type_name::<&str>(),
        b,
        std::any::type_name::<&str>()
    );
    if a < b {
        print!("{} is strictly less than {}", a, b);
    }
    if a <= b {
        print!("{} is less than or equal to {}", a, b);
    }
    if a > b {
        print!("{} is strictly greater than {}", a, b);
    }
    if a >= b {
        print!("{} is greater than or equal to {}", a, b);
    }
    if a == b {
        print!("{} is equal to {}", a, b);
    }
    if a != b {
        print!("{} is not equal to {}", a, b);
    }
    if a == "YUP" && b == "YUP" {
        println!("'YUP' is equal to 'YUP'");
    } else if a < "YUP" {
        println!("'YUP' is less than 'YUP'");
    } else {
        println!("'YUP' is greater than 'YUP'");
    }
    if b < "YUP" {
        println!("'BELL' is less than 'YUP'");
    } else if b > "YUP" {
        println!("'BELL' is greater than 'YUP'");
    } else {
        println!("'BELL' is equal to 'YUP'");
    }
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);
}
