function demoCompare(str1, str2, comparison) {
  console.log(
    `${str1} and ${str2} are ${str1 == str2 ? "" : "not "}exactly ${comparison} equal.`,
  );
  console.log(
    `${str1} and ${str2} are ${str1 != str2 ? "" : "not "}exactly ${comparison} inequal.`,
  );
  console.log(
    `${str1} is ${str1 < str2 ? "" : "not "}lexically ordered before ${str2}.`,
  );
  console.log(
    `${str1} is ${str1 > str2 ? "" : "not "}lexically ordered after ${str2}.`,
  );
}

const a = process.argv[2] || "1.2.Foo";
const b = process.argv[3] || "1.3.Bar";

demoCompare(a, b, "lexically");
demoCompare(a.toLowerCase(), b.toLowerCase(), "lexically");
