Here is the equivalent Rust code for your C program:

```rust
use std::vec::Vec;

struct Factors {
    list: Vec<i32>,
    count: usize,
}

fn xferFactors(fctrs: &mut Factors, flist: &[i32], flix: i32) -> &mut Factors{
   let new_size = fctrs.count + flix as usize; 
    if new_size > flist.len() as usize {
        fctrs.list.reserve(new_size - fctrs.list.len());
    } else {
       fctrs.list = Vec::new();
   }
   fctrs.list.extend_from_slice(&flist[0..flix as usize]);
   fctrs.count = new_size; 
   fctrs
}

fn factor(num: i32, fctrs: &mut Factors) -> &mut Factors {
    let mut flist: [i32; 301] = [0; 301];
    let mut flix: i32 = 0;
    let mut dvsr: i32;
    fctrs.count = 0;
   fctrs.list = Vec::new();
   for dvsr in 1..((num as f64).sqrt() as i32 + 1) {
       if num % dvsr != 0 { continue };
       if flix == 300 {
           xferFactors(fctrs, &flist[0..flix as usize], flix);
           flix = 0;
       }
       flist[flix as usize] = dvsr;
       flix += 1;
       flist[flix as usize] = num/dvsr;
       flix += 1;
   }
   if (dvsr * dvsr) == num {
      flist[flix as usize] = dvsr;
      flix += 1;
  }
  if flix > 0 {
      xferFactors( fctrs, &flist[0..flix as usize], flix);
  }
   return fctrs;
}
    
fn main() {
    let nums2factor: [i32;4] = [ 2059, 223092870, 3135, 45 ];
    let mut ftors = Factors{ list: Vec::new(), count: 0 };
    for i in 0..nums2factor.len(){
        factor( nums2factor[i], &mut ftors );
        print!("\nFactors of {} are:\n ", nums2factor[i]);
       let sep = ' ';
       for j in 0..ftors.count {
           print!("{} {}", sep, ftors.list[j as usize]);
       }
       println!();
   }
}
```
Please note that Rust uses `usize` for lengths and indices instead of `short`, therefore some changes are made to ensure the program works correctly in Rust. Also please be aware that this is a direct translation so any optimizations or improvements would have to be done manually.
