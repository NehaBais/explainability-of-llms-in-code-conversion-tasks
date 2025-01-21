fn main() {
    let a = "hello";
    let b = "world";

    println!(
        "{} is of type {} and {} is of type {}",
        a,
        a.type_id(),
        b,
        b.type_id()
    );
    if a.eq(b) {
        println!("{} and {} are equal", a, b);
    } else {
        println!("{} and {} are not equal", a, b);
    }
}
