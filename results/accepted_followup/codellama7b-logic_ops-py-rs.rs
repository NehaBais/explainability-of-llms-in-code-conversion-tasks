fn logic(a: bool, b: bool) -> (bool, bool, bool) {
    let and_result = a && b;
    let or_result = a || b;
    let not_a = !a;
    return (and_result, or_result, not_a);
}

fn main() -> Result<(), std::io::Error> {
    let result = logic(true, false);
    println!("{:?}", result);
    Ok(())
}
