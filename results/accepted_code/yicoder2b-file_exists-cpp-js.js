const { readFileSync, existsSync } = require("fs");

function file_exists(path) {
  console.log(path);
  if (existsSync(path)) {
    if (path.isDirectory()) {
      console.log(" is a directory");
    } else {
      const stat = fs.statSync(path);
      console.log(` exists with a file size of ${stat.size} bytes.`);
    }
  } else {
    console.log(" does not exist");
  }
}

file_exists("/input.txt");
file_exists("/zero_length.txt");
file_exists("/docs/input.txt");
file_exists("/docs/zero_length.txt");
