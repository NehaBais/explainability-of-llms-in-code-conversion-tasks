// package main
import { statSync, mkdirSync, existsSync } from "fs";
import { resolve } from "path";

const printStat = (p) => {
  try {
    const i = statSync(p);
    if (i.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (err) {
    console.log(err);
  }
};

const main = () => {
  printStat("input.txt");
  printStat("/input.txt");
  mkdirSync("docs");
  existsSync("docs")
    ? printStat("docs")
    : console.log("Directory docs does not exist.");

  // Delete directory 'docs' before running the next code snippet
  rmdirSync("docs", { recursive: true });
};
