if let (Ok(a), Ok(b)) = (a.parse::<i32>(), b.parse()) {
 // test for less-than
 if a < b {
 println!("{} is less than {}", a, b);
 }
 // test for equality
 if a == b {
 println!("{} is equal to {}", a, b);
 }
 // test for greater-than
 if a > b {
 println!("{} is greater than {}", a, b);
 }
} else {
 println!("Please enter valid integers");
}