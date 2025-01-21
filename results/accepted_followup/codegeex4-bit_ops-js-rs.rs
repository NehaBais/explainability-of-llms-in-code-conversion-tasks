fn main() {
    let a = 42;
    let b = 3;

    let left_shift: u32 = (a << b as u32).into();
    let right_shift: u32 = (a >> b as u32).into();
    let arith_right_shift: u32 = (a.wrapping_shr(b as u32)).into();
    let left_rotate: u32 = a.rotate_left((b & 31) as u32);
    let right_rotate: u32 = a.rotate_right((b & 31) as u32);
}
