const fs = require("fs");

function mkdirp(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
    console.log(`Directory created successfully: ${path}`);
  } catch (error) {
    if (error.code === "EEXIST") {
      console.log(`Directory already exists: ${path}`);
    } else {
      throw error;
    }
  }
}

// Example usage
mkdirp("./path/to/dir");
