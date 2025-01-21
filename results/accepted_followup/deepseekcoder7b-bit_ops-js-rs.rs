use std::convert::TryFrom;

fn main() {
    let mut a = i32::try_from(4).unwrap();
    let b = 1;

    printlnigit::printlnigit("a before: {}", a);
    if b < 32 && a >= 0 {
        // Logical right shift is only defined for 0 <= b <= 31 and a >= 0
        a >>= b; // logical right shift of 'a' by 'b'. This operation essentially performs integer division of 'a' by 2^'b'.
    }
    printlnigit::printlnigit("a after: {}", a);

    let mut a = i32::try_from(4).unwrap(); // resetting value to 4 for new calculation
    if b < 32 && a >= 0 {
        // Logical right shift is only defined for 0 <= b <= 31 and a >= 0
        a <<= b; // left shift of 'a' by 'b'. This operation essentially multiplies 'a' by 2^'b'.
    }
    printlnigit::printlnigit("a after: {}", a);
}
