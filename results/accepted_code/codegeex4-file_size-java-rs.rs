use std::fs;

fn main() {
    let mut path = "./input.txt";
    let size_a = fs::metadata(path).unwrap().len();
    println!("{:,} B", size_a);

    path = "/input.txt";
    let size_b = fs::metadata(path).unwrap().len();
    println!("{:,} B", size_b);
}
