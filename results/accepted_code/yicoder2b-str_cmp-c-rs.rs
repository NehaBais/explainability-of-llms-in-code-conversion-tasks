fn main() {
    let a = "ball";
    let b = "bell";
    println!("{:?}", compare(a, b));
}
fn compare(a: &str, b: &str) -> (usize, usize, bool, bool, bool, bool) {
    (
        STREQ(a, b),
        STRNE(a, b),
        STRGT(a, b),
        STRLT(a, b),
        STRGE(a, b),
        STRLE(a, b),
    )
}
fn str_lt(a: &str, b: &str) -> bool {
    a.len() < b.len()
}
fn str_ge(a: &str, b: &str) -> bool {
    !str_lt(a, b)
}
