const fs = require("fs");

if (fs.existsSync("input.txt")) {
  console.log("input.txt exists in the current working directory");
}

if (fs.existsSync("/input.txt")) {
  console.log("/input.txt exists at the filesystem root");
}

if (fs.existsSync("docs")) {
  console.log("docs is a directory in the current working directory");
}

if (fs.existsSync("/docs")) {
  console.log("/docs is a directory at the filesystem root");
}
