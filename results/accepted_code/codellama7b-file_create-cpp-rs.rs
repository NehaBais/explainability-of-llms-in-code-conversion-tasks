use std::fs;
use std::os::raw::c_int;

fn main() {
    let mut file = fs::File::create("output.txt").unwrap();
    file.sync_all().unwrap();
    drop(file);

    fs::create_dir("docs").unwrap();
    drop(fs::create_dir("/docs"));
}
