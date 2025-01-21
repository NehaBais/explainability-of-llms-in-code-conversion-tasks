let n: i32 = 5;
let a: i32 = 10;
let width: u8 = 4;
println!("{}", (a >> (-n % width)) | ((1 << width) - 1));
println!("{}", (a >> (n % width)));