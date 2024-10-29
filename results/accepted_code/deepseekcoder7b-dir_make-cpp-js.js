const mkdirp = require("mkdirp"); // require the module
const path = require("path"); // Required for handling file paths

function createDir(targetPath) {
  return new Promise((resolve, reject) => {
    mkdirp(targetPath, (err) => {
      if (err) reject(err);
      else resolve();
    });
  });
}

// Usage: Replace ./path/to/dir with your desired path.
const dir = "./path/to/dir";
createDir(dir)
  .then(() => {
    console.log("Directory Created Successfully");
  })
  .catch((err) => {
    console.error("Failed to create directory", err);
  }); // Print success message or error on failure
