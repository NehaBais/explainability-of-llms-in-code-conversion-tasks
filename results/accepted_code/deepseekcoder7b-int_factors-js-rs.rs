extern crate itertools;
use itertools::Itertools;

fn factors(num: u32) -> Vec<u32> {
    let mut n_factors = (1..=(num as f64).sqrt() as u32).filter(|i| num % i == 0).collect_vec();
    
    if (num as f64).sqrt().ceil() != n_factors.last().unwrap(){
        let last = n_factors.pop().unwrap();
        n_factors.append(&mut n_factors.iter().map(|i| num / i).collect_vec()); 
    } else {
       n_factors.push(*n_factors.last().unwrap()) ;
   <｜begin▁of▁sentence｜>}
    
    // sort in ascending order
    n_factors.sort();
    
    return n_factors;
}

fn main() {
   println!("{:?}", factors(45));  // [1,3,5,9,15,45]
   println!("{:?}", factors(53));  // [1,53]
   println!("{:?}", factors(64));  // [1,2,4,8,16,32,64]
}