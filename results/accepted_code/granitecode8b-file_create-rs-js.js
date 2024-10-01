const fs = require("fs");
const path = require("path");
const { spawnSync } = require("child_process");
const dirPath = "./docs";
const filePath = "./output.txt";

try {
  // Create an empty directory "docs" in the current working directory.
  fs.mkdirSync(dirPath, { recursive: true });

  // Create an empty file "output.txt" in the current working directory.
  fs.writeFileSync(filePath, "");

  // Create an empty directory "docs" in the filesystem root (/) and create an empty file "output.txt" in it.
  const { stdout } = spawnSync("sudo", ["mkdir", "-p", "/docs"], {
    encoding: "utf8",
  });
  if (stdout) {
    console.log(stdout);
  }

  const { stdout: output } = spawnSync("sudo", ["touch", "/docs/output.txt"], {
    encoding: "utf8",
  });
  if (output) {
    console.log(output);
  }
} catch (error) {
  console.error(error);
}
