use std::env;

fn main() {
  let args : Vec<_> = env::args().collect();
  let a = args[1].parse::<i32>().unwrap();
  let b = args[2].parse::<i32>().unwrap();

  println !("sum:              {}", add_integers(a, b));
  println !("difference:       {}", subtract_integers(a, b));
  println !("product:          {}", multiply_integers(a, b));
  // The integer quotient here is not defined in the same way as with division.
  // Rust doesn't have a built-in operator for this operation.
  // You could implement it manually or provide a hint to the user about how it
  // might work.
  println !("integer quotient: {}", a / b); // truncates towards zero
  if let
    Some(_) = &((a % b) as i8) {
      println !("remainder:        {}", a % b); // same sign as first operand
    }
  else {
    println !("remainder:        N/A (modulus does not yield a valid result "
              "for the given input)");
  }
}