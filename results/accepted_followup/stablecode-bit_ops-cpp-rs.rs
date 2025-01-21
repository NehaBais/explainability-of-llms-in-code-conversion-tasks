fn bitwise(mut a: u32, mut b: i32) 
{
    println!("a and b: 
{}", a & (u32::from_ne_bytes([0x00FF, 
0xFF00, 
0x000F]) as u32)) 
// Assuming little-endian encoding for unsigned integers.

    println!("a or b:  
{}", a | u32::from_ne_bytes([0x000F, 
0x00FF, 
0xFF00, 
0xFFFF]) as u32)) 
// Assuming little-endian encoding for unsigned integers.

    println!("a xor b: 
{}", a ^ u32::from_ne_bytes([0x000F, 
0x00FF, 
0xFF00, 
0xFFFF]) as u32)) 
// Assuming little-endian encoding for unsigned integers.

    println!("not a:   
{}", !a));

    println!("a shl b:  
{}", a << b);

    println!("a shr b:  
{}", a >> b);

    println!("a ror b: 
{}", a.rotate_right(b)));

    println!("a rol b: 
{}", a.rotate_left(b)));

    println!("a xor b: 
{}", a ^ b));
}