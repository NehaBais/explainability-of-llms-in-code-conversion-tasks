use std::fs;

fn main() {
    let current_dir = fs::metadata("docs/input.txt").is_ok();
    println!(
        "Does 'docs/input.txt' exist in the current working directory? {}",
        current_dir,
    );

    let root_dir = fs::metadata("/docs/input.txt").is_ok();
    println!(
        "Does '/docs/input.txt' exist in the filesystem root? {}",
        root_dir
    );
}
