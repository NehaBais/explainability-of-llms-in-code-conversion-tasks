Here is the Rust code that computes the factors of a positive integer:
```
fn print_factors(nr: i64) {
 if nr < 1 {
 println!("Factors of {} not computed", nr);
 return;
 }
 let mut fs = vec![1];
 let mut e = 0;
 while nr % 2 == 0 {
 nr /= 2;
 e += 1;
 }
 let mut p = 3;
 while nr > 1 {
 if p * p > nr {
 p = nr;
 }
 let mut e = 0;
 while nr % p == 0 {
 nr /= p;
 e += 1;
 }
 if e > 0 {
 fs.append(&mut (0..e+1).map(|k| fs[k] * p.pow(k)).collect());
 }
 p += 2;
 }
 println!("Factors of {}: {:?}", nr, fs);
 println!("Number of factors = {}", fs.len());
}
fn main() {
 print_factors(-1);
 print_factors(0);
 print_factors(1);
 print_factors(2);
 print_factors(3);
 print_factors(53);
 print_factors(45);
 print_factors(64);
 print_factors(600851475143);
 print_factors(999999999999999989);
}
``` 
The Rust code uses a loop to calculate the number of trailing zeros in the input integer and adds them to the result. Then, it uses a loop to iterate over odd divisors of the input integer, starting from 3, up to the square root of the input integer. For each divisor, it counts the number of times it divides evenly into the input integer and appends the factors to the result list using a helper function. Finally, it prints the result and the number of factors.

