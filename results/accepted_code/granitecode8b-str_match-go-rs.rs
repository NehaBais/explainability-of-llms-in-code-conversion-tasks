fn match(first: &str, second: &str) {
 println!("1. {} starts with {}: {}", first, second, first.starts_with(second));
 let mut i = first.find(second).unwrap_or(-1);
 println!("2. {} contains {}: {}", first, second, i >= 0);
 if i >= 0 {
 println!("2.1. at location {}", i);
 for start in (i+1..first.len()).step_by(second.len()) {
 i = first[start..].find(second).unwrap_or(-1);
 if i < 0 {
 break;
 }
 println!("2.2. at location {}", start + i);
 }
 println!("2.2. and that's all");
 }
 println!("3. {} ends with {}: {}", first, second, first.ends_with(second));
}
fn main() {
 match("abracadabra", "abr");
}