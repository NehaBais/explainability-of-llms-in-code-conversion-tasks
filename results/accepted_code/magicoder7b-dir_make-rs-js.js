const fs = require("fs");

function createDirectory(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
    console.log(`Created directory ${path}`);
  } catch (err) {
    if (err.code === "EEXIST") {
      console.error("Directory already exists");
    } else {
      throw err;
    }
  }
}

// Use the function to create a directory
createDirectory("./path/to/dir");
