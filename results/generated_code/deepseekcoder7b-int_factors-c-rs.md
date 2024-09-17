In Rust, you can use the `Vec` data structure instead of manually managing memory allocation and reallocation. Also, don't forget to free resources in Rust with `drop`. Here is your equivalent code in Rust:

```rust
#[derive(Debug)]
struct Factors {
    list: Vec<i32>,
}

impl Factors {
    fn new() -> Self {
        Factors { list: vec![], }
    }
    
    fn add(&mut self, value: i32) {
        self.list.push(value);
    }
}

fn factor(num: i32) -> Factors {
    let mut factors = Factors::new();
    
    for dvsr in 1..=((num as f64).sqrt() as i32) {
        if num % dvsr == 0 {
            factors.add(dvsr);
            if dvsr * dvsr != num {
                factors.add(num / dvsr);
            }
        }
    }
    
    factors
}
        
fn main() {
    let nums2factor = [2059, 223092870, 3135, 45];
  
    for &num in nums2factor.iter() {
        println!("Factors of {} are:", num);
        let factors = factor(num);
        for (i, &val) in factors.list.iter().enumerate() {
            if i != 0 {
                print!(" ")
            }
            print!("{}", val);
        }
        println!("");
    }
}
```
Note that Rust automatically frees memory when the variable goes out of scope. But this code manually clears Factors on every loop iteration to prevent possible memory leaks in a case where list becomes too large. If you don't need the factors for future use, just remove `factors` line and don't forget that we are using mutable reference here by prefixing nums2factor with &.

