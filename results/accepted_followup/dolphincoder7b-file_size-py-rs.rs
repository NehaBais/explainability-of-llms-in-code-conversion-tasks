use std::fs;

const CURRENT_SIZE: u64 = fs::metadata("input.txt").unwrap().len();
const ROOT_SIZE: u64 = fs::metadata("/input.txt").unwrap().len();
