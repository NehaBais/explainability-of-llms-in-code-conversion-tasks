fn main() {
    let mut a = 0;
    let mut b = 0;
    if let (Ok(a), Ok(b)) = std::io::stdin().read_line(&mut a).and_read_line(&mut b) => {} else {
        eprintln!("could not read the numbers");
        return;
    }
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
}