fn main() {
  let s = "0123456789";

  let n = 3;
  let m = 4;
  let c = '2';
  let sub = "456";

  let mut iter = s.chars().skip(n).take(m);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let mut iter = s.chars().skip(n);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let mut iter = s.chars().take(s.len() - 1);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let start_index = s.find(c).unwrap(); 
  let mut iter = s.chars().skip(start_index).take(m);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);

  let start_index = s.find(sub).unwrap();
  let mut iter = s.chars().skip(start_index).take(m);
  let substring: String = iter.cloned().collect();
  println!("{}", substring);
}