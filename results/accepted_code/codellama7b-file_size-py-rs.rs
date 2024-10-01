use std::fs;

let size = fs::File::open("input.txt")?.metadata()?.len();
let size = fs::File::open("/input.txt")?.metadata()?.len();