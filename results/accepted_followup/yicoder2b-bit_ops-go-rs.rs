use std::ops;

/// Async trait implementations for the bitwise operations with unsigned types.
impl ops::BitAnd<u8> for i16 {}
impl ops::BitOr<u8> for i16 {}
impl ops::BitXor<u8> for i16 {}

/// Async trait implementations for the bitwise operations with signed types, 16-bit.
impl ops::BitAnd<i16> for i16 {}
impl ops::BitOr<i16> for i16 {}
impl ops::BitXor<i16> for i16 {}

/// Async trait implementations for the bitwise operations with signed types, 16-bit.
pub fn from_be(input: u8) -> i16 {
    ((input as u16) << 8 as u16) as i16
}