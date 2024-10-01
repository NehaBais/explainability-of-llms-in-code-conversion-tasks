use std::{env, fs::File, io::Read};
fn main() {
    let path = env::current_dir().unwrap();
    println!("{:?}", &path);
    //let file_name = "input.txt";
    let mut file = match File::open(format!("{}/input.txt", path.to_string_lossy())) {
        Ok(f) => f,
        Err(_e) => {
            return println!(
                "[FAILED] to open the input.txt in {} folder, error: {}",
                &path.display(),
                _e
            )
        }
    };
    let mut contents = String::new();
    file.read_to_string(&mut contents).unwrap();
    println!("{}", contents);
}
