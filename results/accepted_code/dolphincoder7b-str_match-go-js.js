function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ` + first.startsWith(second));
  let i = first.indexOf(second);
  console.log(`2. ${first} contains ${second}: ` + (i >= 0));
  if (i >= 0) {
    console.log(`2.1. at location ${i}`);
    for (let start = i + 1; ; ) {
      let next_match = first.indexOf(second, start);
      if (next_match < 0) break;
      console.log(`2.2. at location ${next_match}`);
      start += next_match + 1;
    }
    console.log("2.2. and that's all");
  }
  console.log(`3. ${first} ends with ${second}: ` + first.endsWith(second));
}
