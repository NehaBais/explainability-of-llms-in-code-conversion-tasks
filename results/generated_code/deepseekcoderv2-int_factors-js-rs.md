
## The code in Rust

```rust
use std::convert::TryInto;
fn factors (num: i32) -> Vec<i32> {
    let mut n_factors = vec![];
    for i in 1..(num/2 + 1){
        if num % i == 0{
            n_factors.push(i);
            if (num / i != i) && ((num / i).try_into().unwrap() > i ){
                n_factors.push((num / i));
            }
        }
    }
    n_factors.sort();  // numeric sort
    n_factors
}
fn main(){
    println!("{:?}", factors(45));
    println!("{:?}", factors(64));
    println!("{:?}", factors(73));
    }
```
The Rust code above is using 2 for loops to create a vector of the factors of a number. The first loop starts with i=1 and ends when num/2+1, incrementing by one each iteration. If i*i == num then push it into the vec n_factors. Then if (num / i != i) && ((num / i).try_into().unwrap() > i ) is True we can add that to the vector.
If you look at the example code, its just a function called factors which takes in an integer and returns a vector of integers: 
```rust
fn main(){
    println!("{:?}", factors(45)); //[1, 3, 5, 9, 15, 45]
    println!("{:?}", factors(64)); //[1, 2, 4, 8, 16, 32, 64]
    println!("{:?}", factors(73));// [1, 73]
}
```
