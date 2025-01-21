fn main() {
    let mut a = true;
    let mut b = false;

    // Output the result of "and" and "or" on both arguments as well as "not" on first argument
    println!("{} and {} is {}", a && b, &a, (a || b) && &a);
    println!("{} or {} is {}", a || b, &a, (a || b));
    println!("not {} is {}", a, !a);
}