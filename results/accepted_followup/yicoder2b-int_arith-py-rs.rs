let input1 = 4;
let input2 = -3; // if `input2` should be positive
let mut quotient: f64 = ((*input1 as f64 / *input2 as f64).abs() - (input1 as i32 - input2 as i32)).into() as f64;