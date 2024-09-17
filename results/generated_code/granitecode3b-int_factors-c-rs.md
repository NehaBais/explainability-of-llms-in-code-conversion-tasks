Here's the equivalent Rust code for computing the factors of a positive integer:
```rust
struct Factors {
 list: Vec<i32>,
 count: usize,
}
 
fn factor(num: i32) -> Factors {
 let mut flist = vec![];
 let mut dvsr = 1;
 while dvsr * dvsr < num {
 if num % dvsr != 0 {
 continue;
 }
 flist.push(dvsr);
 flist.push(num / dvsr);
 dvsr += 1;
 }
 if dvsr * dvsr == num {
 flist.push(dvsr);
 }
 Factors { list: flist, count: flist.len() }
}
 
fn main() {
 let nums2factor = [2059, 223092870, 3135, 45];
 for &num in nums2factor.iter() {
 println!("factors of {} are: {:?}", num, factor(num));
 }
}
```
This code defines a `Factors` struct with a list of factors and their count, and a `factor` function that takes an integer as input and returns a `Factors` object containing the prime factors and their counts. The main function iterates through the numbers to be factored, calls the `factor` function for each number, and prints out the resulting factors.

