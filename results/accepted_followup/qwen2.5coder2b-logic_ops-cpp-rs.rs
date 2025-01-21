// Define the function print_logic with two boolean arguments
fn print_logic(a: bool, b: bool) {
    // Print the result of "and" on both arguments
    println!("a and b is {}", a && b);

    // Print the result of "or" on both arguments
    println!("a or b is {}", a || b);

    // Print the result of "not" on the first argument
    println!("not a is {}", !a);
}
