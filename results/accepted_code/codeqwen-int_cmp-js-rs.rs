fn compare(a: i32, b: i32) {
    if A == b {
        println!("{} equals {}", A, b);
    }
    if A < b {
        println!("{} is less than {}", A, b);
    }
    if A > b {
        println!("{} is greater than {}", A, b);
    }
}

fn main() {
    // Example usage:
    compare(5, 5); // prints "5 equals 5"
    compare(1, 2); // prints "1 is less than 2"
    compare(3, 2); // prints "3 is greater than 2"
}
