const fs = require("fs");

// checking current working directory
if (fs.existsSync("./input.txt")) {
  console.log("File input.txt exists in the current directory.");
} else {
  console.log("File input.txt does not exist in the current directory.");
}

if (fs.existsSync("/docs")) {
  console.log("Directory docs exists in the current directory.");
} else {
  console.log("Directory docs does not exist in the current directory.");
}

// checking filesystem root
if (fs.existsSync(`${process.cwd()}/input.txt`)) {
  console.log("File input.txt exists in the filesystem root.");
} else {
  console.log("File input.txt does not exist in the filesystem root.");
}

if (fs.existsSync(`${process.cwd()}/docs`)) {
  console.log("Directory docs exists in the filesystem root.");
} else {
  console.log("Directory docs does not exist in the filesystem root.");
}
