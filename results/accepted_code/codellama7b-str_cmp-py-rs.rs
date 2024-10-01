fn main() {
    let a = "YUP";
    let b = "YUP";
    println!("{} is of type {} and {} is of type {}", a, a.type(), b, b.type());
    if a < b {
        println!("{} is strictly less than  {}", a, b);
    }
    if a <= b {
        println!("{} is less than or equal to {}", a, b);
    }
    if a > b {
        println!("{} is strictly greater than  {}", a, b);
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
    if a.is(b) {
        println!("{} has object identity with {}", a, b);
    }
    if !a.is(b) {
        println!("{} has negated object identity with {}", a, b);
    }
}
