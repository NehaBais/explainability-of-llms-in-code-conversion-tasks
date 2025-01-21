use std::fs;
use std::result::Result;
fn mkdirp(path: &str) -> Result<()> {
    fs::create_dir_all(path).map(|_| ())
}
