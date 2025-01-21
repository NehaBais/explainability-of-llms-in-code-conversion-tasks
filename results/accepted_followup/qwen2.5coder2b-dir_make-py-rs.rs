use std::fs;
use std::path::Path;

fn mkdirp(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(path).map_err(|e| e.into())
}
