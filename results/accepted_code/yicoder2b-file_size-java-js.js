const fs = require("fs");

// Verify size of a file in current working directory
try {
  let fileA = fs.statSync("file.txt");
  console.log(`${fileA.size} bytes`);
} catch (err) {
  if (err.code === "ENOENT") {
    console.error("File not found");
  } else {
    throw err;
  }
}

// Verify size of a file in file system root
try {
  let fileB = fs.statSync("/file.txt");
  console.log(`${fileB.size} bytes`);
} catch (err) {
  if (err.code === "ENOENT") {
    console.error("File not found");
  } else {
    throw err;
  }
}
