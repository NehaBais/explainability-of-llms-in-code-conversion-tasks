fn factors(num: i32) -> Vec> {
 let mut result = vec![];
 for i in 1..=(num as f64).sqrt() as usize {
 if num % i == 0 {
 result.push(i);
 if i != num / i {
 result.push(num / i);
 }
 }
 }
 result.sort_unstable();
 result
}
fn main() {
 println!("{:?}", factors(45)); // [1,3,5,9,15,45]
 println!("{:?}", factors(53)); // [1,53]
 println!("{:?}", factors(64)); // [1,2,4,8,16,32,64]
}