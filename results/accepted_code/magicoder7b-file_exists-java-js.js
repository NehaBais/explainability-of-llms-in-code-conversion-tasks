const fs = require("fs");

// Check current directory
if (fs.existsSync("./docs/input.txt")) {
  console.log(
    "The file input.txt exists in the docs directory of the current working directory.",
  );
} else {
  console.log(
    "The file input.txt does not exist in the docs directory of the current working directory.",
  );
}

// Check root directory
if (fs.existsSync("/docs/input.txt")) {
  console.log(
    "The file input.txt exists in the docs directory of the filesystem root.",
  );
} else {
  console.log(
    "The file input.txt does not exist in the docs directory of the filesystem root.",
  );
}
