fn main() {
    let mut s = String::from("hello");
    s.push_back(' '); // Add a space between "hello" and " there!"
    s.push_back('t');
    s.push_back('h');
    s.push_back('e');
    s.push_back('r');
    s.push_back('e');
    println!("{} there!", &s);
}