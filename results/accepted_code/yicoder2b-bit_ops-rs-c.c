fn main() {
  let a : u8 = 105;
  let b : u8 = 91;
  println !("a      = {:b}", a);
  println !("b      = {:b}", b);
  println !("a | b  = {:b}", a | b);
  println !("a & b  = {:b}", a & b);
  println !("a ^ b  = {:b}", a ^ b);
  println !("!a     = {:b}", !a);
  println !("a << 3 = {:b}", a << 3);
  println !("a >> 3 = {:b}", a >> 3);
}