// Incorrect usage of raw pointer
let a: i32 = *b; 

// Corrected version
let mut a = b.clone();