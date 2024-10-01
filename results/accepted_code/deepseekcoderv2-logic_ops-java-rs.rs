fn main() {
    logic(true, false);
}

pub fn logic(a: bool, b: bool) -> () {
    println!("{} AND {}", a, b);
    println!("{} OR {}", a, b);
    println!("NOT {}", a);
}
