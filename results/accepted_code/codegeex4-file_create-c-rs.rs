use std::fs::{self, File};
use std::io::prelude::*;

fn main() {
    fs::create_dir("docs").expect("Unable to create directory");
    let mut f = File::create("output.txt").expect("Unable to create file");
    f.set_permissions(fs::Permissions::from_mode(0o0640))
        .expect("Unable to set permissions");
}
