use std::fs;
use std::io;

fn fct(err: std::io::Result<()>) {
    match err 
{
        Ok(_) => (),
        Err(e) => println!("{}", e)),
    }
}

let home_dir = match fs::get_metadata(".") {
    Some(meta) if meta.is_file() => "",
    _ => panic!("Not a file"),
}, ".");

fs::write(home_dir + "output.txt", "").unwrap();

fs::create_dir("docs").unwrap();