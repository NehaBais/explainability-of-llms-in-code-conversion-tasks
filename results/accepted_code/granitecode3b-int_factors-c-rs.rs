struct Factors {
    list: Vec<i32>,
    count: usize,
}

fn factor(num: i32) -> Factors {
    let mut flist = vec![];
    let mut dvsr = 1;
    while dvsr * dvsr < num {
        if num % dvsr != 0 {
            continue;
        }
        flist.push(dvsr);
        flist.push(num / dvsr);
        dvsr += 1;
    }
    if dvsr * dvsr == num {
        flist.push(dvsr);
    }
    Factors {
        list: flist,
        count: flist.len(),
    }
}

fn main() {
    let nums2factor = [2059, 223092870, 3135, 45];
    for &num in nums2factor.iter() {
        println!("factors of {} are: {:?}", num, factor(num));
    }
}
