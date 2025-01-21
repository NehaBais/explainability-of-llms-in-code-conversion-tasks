use std::vec::Vec;

fn xfer_factors(fctrs: &mut Vec<i32>, flist: &[i32], flix: usize) {
    for item in flist.iter() {
        fctrs.push(*item);
    }
}

fn factor(num: i32, fctrs: &mut Vec<i32>) -> i32 {
    let mut flist = vec![];
    let mut flix = 0;
    for dvsr in 1.. {
        if num % dvsr != 0 {
            continue;
        }
        if flix == 300 {
            xfer_factors(fctrs, flist.as_slice(), flix);
        }
        flist.push(dvsr);
        flist.push(num / dvsr);
        flix += 1;
    }
    if num == dvsr * dvsr {
        flist.push(dvsr);
    }
    if flix > 0 {
        xfer_factors(fctrs, flist.as_slice(), flix);
    }
}

fn main() {
    let mut nums2factor = vec![2059, 223092870, 3135, 45];
    for i in 0..nums2factor.len() {
        factor(nums2factor[i], fctrs);
        print!("{}", fctrs);
    }
}
