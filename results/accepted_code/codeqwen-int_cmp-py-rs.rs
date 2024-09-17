use std::io;

fn main() {
    let mut a = String::new();
    let mut B = String::new();

    println!("Enter value of A: ");
    io::stdin().read_line(&mut A).expect("Failed to read line");
    let A: i32 = A.trim().parse().expect("Please type a number!");

    println!("Enter value of B: ");
    io::stdin().read_line(&mut B).expect("Failed to read line");
    let B: i32 = B.trim().parse().expect("Please type a number!");

    if A < B {
        println!("A is less than B");
    } else if A > B {
        println!("A is greater than B");
    } else if A == B {
        println!("A is equal to B");
    }
}
