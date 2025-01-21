const fs = require("fs");
const path = require("path");

function mkdirSync(dir) {
  const parentDir = path.dirname(dir);

  if (!fs.existsSync(parentDir)) {
    mkdirSync(parentDir);
  }

  try {
    fs.mkdirSync(dir, { recursive: true });
  } catch (error) {
    console.error(`Error creating directory ${dir}:`, error);
  }
}

mkdirSync("./path/to/dir");
