import { mkdirSync, existsSync } from "fs";

function createDirectoryIfNotExists(path) {
  if (!existsSync(path)) {
    mkdirSync(path);
    console.log("path successfully created");
  }
}

createDirectoryIfNotExists("./parent/test");
