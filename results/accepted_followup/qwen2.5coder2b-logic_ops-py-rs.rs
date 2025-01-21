#[crate_name = "qwen2_5coder2b_logic_ops_rs"]
fn main() {
    logic(true, true);
}

fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}
