use std::fmt;

fn compare<T: PartialEq + fmt::Debug>(a: T, b: T) {
    println!(
        "{} is of type {:?} and {} is of type {:?}",
        a,
        std::any::type_name::<T>(),
        b,
        std::any::type_name::<T>()
    );

    if a < b {
        println!("{} is strictly less than  {}", a, b)
    };
    if a <= b {
        println!("{} is less than or equal to {}", a, b)
    };
    if a > b {
        println!("{} is strictly greater than  {}", a, b)
    };
    if a >= b {
        println!("{} is greater than or equal to {}", a, b)
    };
    if a == b {
        println!("{} is equal to {}", a, b)
    };
    if a != b {
        println!("{} is not equal to {}", a, b)
    };
    if a as i32 == b as i32 {
        println!("{} has object identity with {}", a, b)
    };
    if a as i32 != b as i32 {
        println!("{} has negated object identity with {}", a, b)
    };
}

fn main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare(1024, 1000);
    compare('a', 'b');
    compare(5.0, 5);
}
