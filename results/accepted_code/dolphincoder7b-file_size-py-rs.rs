use std::fs;

let current = fs::metadata("input.txt").unwrap().len();
let root = fs::metadata("/input.txt").unwrap().len();