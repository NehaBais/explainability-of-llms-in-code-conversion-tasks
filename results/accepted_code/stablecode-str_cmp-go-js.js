// JavaScript string comparison operators:
let c = "cat";
let d = "dog";
if (c === d) {
    console.log(c, "is identical to", d));
}
if (c !== d) {
    console.log(c, "is different from", d));
}
if (c > d) {
    console.log(c, "is lexically greater than", d));
}
if (c < d) {
    console.log(c, "is lexically less than", d));
}
if (c >= d) {
    console.log(c, "is lexically greater than or equal to", d));
}
if (c <= d) {
    console.log(c, "is lexically less than or equal to", d));
}

// JavaScript has case sensitive comparisons by default
let e = "Cat";
if (e === "cat") {
    console.log("The comparison is case sensitive");
} else {
    console.log("The comparison is not case sensitive");
}