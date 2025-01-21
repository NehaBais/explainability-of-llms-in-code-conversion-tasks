pub fn substring_nm(s: &str, n: usize, m: usize) -> &str {
    let (a, b) = s.split_at(n);
    b.get(0..m).unwrap()
}

pub fn substring_n(s: &str, n: usize) -> &str {
    let (_a, b) = s.split_at(n); // Using underscore to indicate it's unused variable
    b
}

pub fn substring_(s: &str) -> &str {
    let (a, _b) = s.split_at(s.len() - 1);  // Using underscore to indicate it's unused variable
    a
}

pub fn substring_pos(s: &str, pos: usize) -> &str {
    let (_a, b) = s.split_at(pos); // Using underscore to indicate it's unused variable
    b
}

pub fn substring_sub(s: &str, sub: &str, m: usize) -> &str {
    if let Some(pos) = s.find(sub) {
        let (_a, b) = s[pos..].split_at(m); // Using underscore to indicate it's unused variable
        b
    } else {
        ""
    }
}

fn main() {
  println!("{}", substring_nm("Hello world!", 6,5));
  println!("{}", substring_n("Hello world!", 6));
  println!("{}", substring_("Hello world!"));
  println!("{}", substring_pos("Hello world!", 6));
  println!("{}", substring_sub("Hello world!", "world",5));
}