use std::io;

fn main() {
    let mut n1 = 0;
    let mut n2 = 0;
    print!("enter number: ");
    match io::stdin().read_line(&mut n1) {
        Err(_) => println!("error reading number"),
        Ok(n) if n.is_numeric() == false => println!("not a number entered"),
        Ok(n) => match n.to_i32() {
            Some(num) => n1 = num,
            None => println!("error converting to integer"),
         },
    };

    print!("enter number: ");
    match io::stdin().read_line(&mut n2) {
        Err(_) => println!("error reading number"),
        Ok(n) if n.is_numeric() == false => println!("not a number entered"),
        Ok(n) => match n.to_i32() {
            Some(num) => n2 = num,
            None => println!("error converting to integer"),
         },
    };

    if &*n1 as i32 < &*n2 as i32{
        println!("{} is less than {}", *n1, *n2);
    } else if *n1 as i32 == *n2 as i32 {
        println!("{} is equal to {}", *n1, *n2);
    } else {
        println!("{} is greater than {}", *n1, *n2);
    }
}