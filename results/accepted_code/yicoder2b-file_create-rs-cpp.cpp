use std::io::{self, Write};
use std::fs::{DirBuilder, File};
use std::path::Path;
use std::process;

const FILE_NAME : &'static str = "output.txt"; const DIR_NAME
    : &'static str = "docs";

      fn
      create(root
             : Path) -> io::Result<()> {
  let f_path = root.join(&FILE_NAME);
  let d_path = root.join(&DIR_NAME);
    Ok(_ = DirBuilder::new().create_or_fs_opener(|p| Ok(File::open(p))).or_else(|e| {
        Err(([f_path, d_path].iter().find_last_unnamed()?, e))
    })
}