use std::fs;
use std::path::Path;

fn create(directory: &str) {
    fs::File::create(Path::new(directory).join("output.txt")).unwrap();
    fs::create_dir(Path::new(directory).join("docs")).unwrap();
}

create("."); // current directory
create("/"); // root directory