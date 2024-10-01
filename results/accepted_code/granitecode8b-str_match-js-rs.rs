let string_a = "tacoloco";
let string_b = "co";
let mut q1 = false;
let mut q2 = None;
let mut q3 = false;
let mut matches = Vec::new();
// stringA starts with stringB
q1 = string_a.starts_with(string_b);
// stringA contains stringB
q2 = string_a.find(string_b);
// multiple matches
for mat in string_a.match_indices(string_b) {
	matches.push(mat.0);
}
// stringA ends with stringB
q3 = string_a.ends_with(string_b);
println!("1: Does '{}' start with '{}'? {}", string_a, string_b, q1);
println!("2: Is '{}' contained in '{}'?", string_b, string_a);
if let Some(index) = q2 {
	println!("   In fact, it happens {} times within '{}', at index{}.", matches.len(), string_a, if matches.len() > 1 {"es"} else {""});
	println!("       The first match is at index {}.", index);
} else {
	println!("   No.");
}
println!("3: Does '{}' end with '{}'? {}", string_a, string_b, q3);