This is a simple conversion of the C code to Rust. 
Firstly, we need to define our types: `Factors` struct which contains an array list and count for storing factors. 
Then, we will create a function `factor()` that uses `xferFactors()` function to transfer each factor into the list. 
Finally, in the `main` function, we call this function on different numbers and print out all of their factors.

```rust
pub struct Factors {
    list: Option<Vec<i32>>,
    count: i16,
}

fn xferFactors(fctrs: &mut Factors, flist: &[i32], flix: usize) {
    let new_size = fctrs.count + flix;
    if let Some(mut list) = &mut *fctrs.list {
        if list.len() < new_size {
            list = list.resize(new_size, 0);
        }
    } else {
        *fctrs.list = vec![0; new_size];
    }
    for (i, &val) in flist.iter().enumerate() {
        (*fctrs.list)[i + fctrs.count] = val;
    }
    fctrs.count = new_size;
}

pub fn factor(num: i32, mut fctrs: Factors) -> Factors {
    let mut flist: Vec<i32> = vec![];
    let mut flix = 0;
    fctrs.count = 0;
    xferFactors(&mut fctrs, &vec![1; num as usize], 1);
    for dvsr in 1..(num / 2) + 1 {
        if (num % dvsr == 0) && flix < 300 {
            flist.push(dvsr);
            flist.push((num as i32) / dvsr as i32);
            flix += 2;
        }
    }
    if (num as i32 * num as i32 == num) && flix < 300 {
        flist.push(num as i32);
        flix += 1;
    }
    if flist.len() > 0 {
        xferFactors(&mut fctrs, &flist, flist.len());
    }
    return fctrs;
}

fn main() {
    let nums2factor = [2059, 223092870, 3135, 45];
    for i in 0..4 {
        let mut fctors = factor(nums2factor[i], Factors{ list: None, count: 0 });
        println!("factors of {:?} are:", nums2factor[i]);
        for j in (&fctors).list {
            match j {
                Some(val) => println!("{:?}", val),
                _ => (),
            }
        }
    }
}
```
