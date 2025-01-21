fn bit_op(a: u32, b: u32, op: char) -> u32 {
    let width = 3; // or any other valid value
    match op {
        '&' => a & b,
        '|' => a | b,
        '^' => a ^ b,
        _ => panic!("Invalid operation"),
    }
}
