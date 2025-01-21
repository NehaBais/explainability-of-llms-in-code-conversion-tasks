fn main() 
{
    let s 
= "ABCDEFGH";
    let n 
= 2;
    let m 
= 3;

    // for reference
    println!("Index: {} 01234567", "");
    println!("String: {}", s);

    // starting from n characters in and of m length
    if let Some(index) 
= s.chars().nth(n as usize)) 
    {
        let substring 
= &s[index..index + m]];
        println!("Start {} ,length {},  : {:?}", n, m, substring);
    }

    // starting from n characters in, up to the end of the string
    if let Some(index) 
= s.chars().nth(n as usize)) 
    {
        let substring 
= &s[index..];
        println!("Start {} ,to end,  : {:?}", n, substring);
    }

    // whole string minus last character
    let substring 
= &s[..len(s) - 1]];
    println!("All but last,  : {:?}", substring);
}