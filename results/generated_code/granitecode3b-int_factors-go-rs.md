Here is the code in Rust that computes the factors of a positive integer:
```
fn print_factors(nr: i64) {
 if nr < 1 {
 println!("Factors of {} not computed", nr);
 return;
 }
 
 println!("Factors of {: }: ", nr);
 let mut fs = vec![1];
 let mut e = 0;
 
 for d in 2..=nr {
 if nr % d == 0 {
 for i in 0..e {
 fs[i] *= d;
 }
 e += 1;
 fs.push(d);
 nr /= d;
 d -= 1;
 }
 }
 
 if e > 0 {
 fs.insert(0, 1);
 fs.push(nr);
 } else {
 fs.push(nr);
 }
 
 println!("{:?}", fs);
 println!("Number of factors = {}", fs.len());
}
```
In this code, we iterate over all the numbers from 2 to `nr` and check if they are factors of `nr`. If a factor is found, we add it to the list of factors. We also keep track of the number of factors using the variable `e`. Finally, we print the list of factors and the number of factors.

