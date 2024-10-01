use std::io;

fn compare(a: i32, b: i32) {
    if a == b {
        println!("{} equals {}", a, b);
    } else if a < b {
        println!("{} is less than {}", a, b);
    } else {
        // 'a > b' case.
        println!("{} is greater than {}", a, b);
    }
}

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a).expect("Failed to read line!");
    io::stdin().read_line(&mut b).expect("Failed to read line!");

    if let (Ok(a_num), Ok(b_num)) = (a.trim().parse::<i32>(), b.trim().parse::<i32>()) {
        compare(a_num, b_num);
    } else {
        println!("Inputs are not valid integers and cannot be compared.");
    };
}
