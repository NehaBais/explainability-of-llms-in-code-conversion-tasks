const fs = require("fs");
function createDirectory(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
    console.log("Directory created successfully");
  } catch (err) {
    if (err.code === "EEXIST") {
      console.log("Directory already exists");
    } else {
      throw err;
    }
  }
}
// Example usage:
createDirectory("C:/parent/test");
