use std::io;
fn main() {
    let mut s1 = String::new();
    let mut s2 = String::new();
    // Get two strings from user
    match (
        io::stdin().read_line(&mut s1),
        io::stdin().read_line(&mut s2),
    ) {
        (Ok(_), Ok(_)) => {
            let a: i32 = s1.trim().parse().unwrap(); // Parse string to integer
            let b: i32 = s2.trim().parse().unwrap();
            // Compare and print result
            if a < b {
                println!("{} is less than {}", a, b);
            } else if a == b {
                println!("{} is equal to {}", a, b);
            } else {
                println!("{} is greater than {}", a, b);
            }
        }
        _ => println!("Error getting input from user."),
    };
}
