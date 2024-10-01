const fs = require("fs");

function fileExists(path) {
  console.log(`Checking if ${path} exists...`);
  if (fs.existsSync(path)) {
    console.log(
      `${path} exists with a size of ${fs.statSync(path).size} bytes.`,
    );
  } else {
    console.log(`${path} does not exist.`);
  }
}

fileExists("input.txt");
fileExists("zero_length.txt");
fileExists("docs/input.txt");
fileExists("docs/zero_length.txt");
