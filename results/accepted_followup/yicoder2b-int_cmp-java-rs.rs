use std::io;

fn main() {
    let mut s = String::new();
    match io::stdin().read_line(&s) {
        Ok(_) => {},
        Err(err) => println!("Error reading line: {:?}", err),
    };
    let nbr1: i32 = s.trim().parse().unwrap();
    s.clear();
    match io::stdin().read_line(&s) {
        Ok(_) => {},
        Err(err) => println!("Error reading line: {:?}", err),
    };
    let nbr2: i32 = s.trim().parse().unwrap();
    if let Err(e1) = &nbr1 <&nbr2 {
        println!("{} is less than {}", nbr1, nbr2);
    } else if let Err(e2) = &nbr1 >&nbr2 {
        println!("{} is greater than {}", nbr1, nbr2);
    } else {
        println!("{} is equal to {}", nbr1, nbr2);
    }
}