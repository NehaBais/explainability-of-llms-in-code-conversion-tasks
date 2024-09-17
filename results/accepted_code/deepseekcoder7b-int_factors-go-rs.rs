extern crate num_bigint; // You need this library for big integer support
use std::fmt; 

fn main() {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    // Uncommenting the line below would cause a runtime error because of overflow 
    //printFactors(999999999999999989);
}

fn printFactors<F>(nr: num_bigint::BigUint, fmt: F) -> fmt::Result
where
    F: fmt::Display + fmt::Write,
{
     if nr.cmp(&num_bigint::BigUint::one()) == std::cmp::Ordering::Less {
        write!(fmt, "Factors of {} not computed", nr)?;
    } else {
       let mut fs: Vec<num_bigint::BigUint> = vec![num_bigint::BigUint::one()];
       
       fn apf(&nr, p: num_bigint::BigUint, e: u32) -> Vec<num_bigint::BigUint> {
            let mut res: Vec<num_bigint::BigUint> = vec![];
            for i in 0..e {
                for f in fs.iter() {
                    res.push(*f * &(p.pow((i + 1) as u32)));
                }
           <｜begin▁of▁sentence｜>}
           return res;
       }
       
       let mut e: num_bigint::BigUint = num_bigint::BigUint::zero();
       while nr % 2 == num_bigint::BigUint::one() {
              nr /= 2u.into();
              e += 1;
        }
        
       fs = apf(&nr, 2, e);

       let d: num_bigint::BigInt = num_bigint::BigUint::one().into();
       while nr > num_bigint::BigUint::one() {
            d += 2;
            let mut e: u32 = 0;
            
            while nr % &(d.abs()) == num_bigint::BigUint::zero() {
                nr /= &(d.abs());
                e += 1;
            <}
           if e > 0 {
              fs = apf(&nr, d.abs(), e);
            }
       <} 
       write!(fmt, "Factors of {} : {:?}\nNumber of factors = {}", nr, &fs, fs.len())
    }
}