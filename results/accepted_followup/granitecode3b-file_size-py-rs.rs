extern crate std as other_std;
use other_std::env;
use other_std::fs;
fn main() {
    let size1 = fs::metadata("input.txt").unwrap().len();
    let size2 = fs::metadata("/input.txt").unwrap().len();
    println!(
        "Size of input.txt in current working directory: {} bytes",
        size1
    );
    println!("Size of /input.txt in file system root: {} bytes", size2);
}
