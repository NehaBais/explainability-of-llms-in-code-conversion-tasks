Here is the Rust code that computes the factors of a positive integer:
```
struct Factors {
 list: Vec,
 count: usize,
}
impl Factors {
 fn new() -> Self {
 Self {
 list: vec![],
 count: 0,
 }
 }

 fn add_factor(&mut self, factor: i32) {
 self.list.push(factor);
 self.count += 1;
 }

 fn merge(&mut self, other: &Factors) {
 for factor in &other.list {
 self.add_factor(*factor);
 }
 }
}
fn factor(num: i32, fctrs: &mut Factors) {
 let mut dvsr = 1;
 while dvsr * dvsr <= num {
 if num % dvsr == 0 {
 if fctrs.list.len() >= 300 {
 fctrs.merge(&factor(num / dvsr, &mut Factors::new()));
 } else {
 fctrs.add_factor(dvsr);
 }
 }
 dvsr += 1;
 }
 if dvsr * dvsr == num {
 fctrs.add_factor(dvsr);
 }
}
fn main() {
 let nums2factor = vec![2059, 223092870, 3135, 45];
 let mut ftors = Factors::new();
 for num in nums2factor {
 factor(num, &mut ftors);
 println!("factors of {} are: {:?}", num, ftors.list);
 }
}
```
The Rust code uses a struct to hold the factors and a function to compute them. The `Factors` struct has two fields: `list`, which is a vector of integers, and `count`, which is the number of elements in the vector. The `factor` function takes an integer `num` and a pointer to a `Factors` struct `fctrs`. It initializes `dvsr` to 1 and enters a loop that continues while `dvsr * dvsr <= num`. For each value of `dvsr`, it checks if `num % dvsr == 0`. If so, it adds `dvsr` to the `list` field of `fctrs` and increments the `count` field. It then adds `num / dvsr` to the `list` field of `fctrs`. The loop continues until `dvsr * dvsr > num`, at which point it checks if `dvsr * dvsr == num` and adds it to the `list` field of `fctrs` if so. Finally, the `main` function creates a vector `nums2factor` of integers to factor, initializes an empty `Factors` struct `ftors`, and loops through each integer in `nums2factor`. For each integer, it calls the `factor` function with the current integer and a pointer to `ftors`. It then prints the factors of the integer.

