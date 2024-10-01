function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);
  let i = first.indexOf(second);
  if (i !== -1) {
    console.log(`2. ${first} contains ${second} at location ${i}`);
    for (let start = i + 1; ; ) {
      i = first.slice(start).indexOf(second);
      if (i === -1) break;
      console.log(`2.2. at location ${start + i},`);
      start += i + 1;
    }
    console.log("2.2. and that's all");
  }
  console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}
match("abracadabra", "abr");
