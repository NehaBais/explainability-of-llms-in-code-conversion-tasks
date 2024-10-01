const fs = require("fs");
const path = require("path");
try {
  fs.mkdirSync(path.join(__dirname, "tmp/some/path/to/dir"), {
    recursive: true,
  });
  console.log("Directory created successfully");
} catch (err) {
  if (err.code === "EEXIST") {
    console.log("Directory already exists");
  } else {
    throw err;
  }
}
