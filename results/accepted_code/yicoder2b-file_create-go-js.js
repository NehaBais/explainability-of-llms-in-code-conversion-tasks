const fs = require("fs");

// Creating file in current working directory
try {
  fs.openSync("input.txt", "w");
  console.log("File created!");
} catch (err) {
  console.error(`Error creating file ${err}`);
}

// Creating file at root directory
try {
  fs.openSync("/output.txt", "w");
  console.log("File created!");
} catch (err) {
  console.error(`Error creating file ${err}`);
}

// Creating directory in current working directory
try {
  fs.mkdirSync("docs");
  console.log("Directory created!");
} catch (err) {
  console.error(`Error creating directory ${err}`);
}

// Creating directory at root directory
try {
  fs.mkdirSync("/docs1", { recursive: true });
  console.log("Directory created!");
} catch (err) {
  console.error(`Error creating directory ${err}`);
}
