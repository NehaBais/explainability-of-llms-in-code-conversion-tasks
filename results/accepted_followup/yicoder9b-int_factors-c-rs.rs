use std::vec::Vec;

struct Factors {
    list: Vec<i32>,
    count: usize,
}

fn xferFactors<'a>(fctrs: &'a mut Factors, flist: &'a [i32], flix: i32) -> &'a mut Factors {
... } // code for the function `xferFactors`