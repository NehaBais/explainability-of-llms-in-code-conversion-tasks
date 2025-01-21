fn main() {
    print_logic(true, false); // Or whatever boolean values you want to test with
}

fn print_logic(a: bool, b: bool) {
    let a_and_b = a && b;
    println!("a and b is {}", a_and_b);

    let a_or_b = a || b;
    println!("a or b is {}", a_or_b);

    let not_a = !a;
    println!("not a is {}", not_a);
}