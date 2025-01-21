fn main() {
    print_logic(true, false); //test case
}

fn print_logic(a: bool, b: bool) {
    println!("{:?}", a && b); 
    println!("{:?}", a || b); 
    println!("{:?}", !a); 
}