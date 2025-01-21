fn main() 
{
    let s = "abcdefgh";
    let n = 2;
    let m = 3;
    let char = 'd';
    let chars = "cd";

    // starting from n=2 characters in and m=3 in length;
    println!("{}", &s[n-1..n+m-1].to_string()));

    // starting from n characters in, up to the end of the string;
    println!("{}", &s[n-1..].to_string()));

    // whole string minus last character;
    println!("{}", &s[..-1].to_string()));

    // starting from a known character char="d" within the string and of m length;
    let index = s.find(char).unwrap();
    println!("{}", &s[index..index+m].to_string()));

    // starting from a known substring chars="cd" within the string and of m length.
    let index = s.find(&chars)).unwrap();
    println!("{}", &s[index..index+m].to_string()));
}