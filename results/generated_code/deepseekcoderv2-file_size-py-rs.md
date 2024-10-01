The code below is the solution to this problem.

<details><summary>Click here for a hint:</summary>
<blockquote>Try looking at <a href="https://doc.rust-lang.org/std/fs/struct.File.html">this</a> in Rust.</blockquote></details>

```Rust
use std::{
    env,
    fs::File,
    io::Read,
};
fn main() {
    let path = env::current_dir().unwrap();
    println!("{:?}", &path);
    //let file_name = "input.txt";
    let mut file = match File::open(format!("{}/input.txt", path.to_string_lossy())) {
        Ok(f) => f,
        Err(_e) => return println!(
            "[FAILED] to open the input.txt in {} folder, error: {}", 
                &path.display(), _e),
    };
    let mut contents = String::new();
    file.read_to_string(&mut contents).unwrap();
    println!("{}", contents);
}
```
