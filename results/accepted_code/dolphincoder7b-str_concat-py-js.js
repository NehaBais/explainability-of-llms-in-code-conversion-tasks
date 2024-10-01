let s1 = "hello";
console.log(s1 + " world");

let s2 = s1 + " world"; // You have to use concatenation instead of addition
console.log(s2);

let arr = [s1, "world", "mom"];
console.log(arr.join(", "));

let s3 = ", ".join([s1, "world", "mom"]); // You have to use concatenation instead of addition
console.log(s3);
