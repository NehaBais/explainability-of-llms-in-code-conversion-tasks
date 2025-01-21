String stringA = "tacoloco";
String stringB = "co";
boolean q1; // stringA starts with stringB
int q2; // index of first occurrence of stringB in stringA
List q2matches = new ArrayList<>(); // list of indices of all occurrences of stringB in stringA
boolean q3; // stringA ends with stringB
// stringA starts with stringB
q1 = stringA.startsWith(stringB);
// stringA contains stringB
q2 = stringA.indexOf(stringB);
// multiple matches
Matcher m = Pattern.compile(stringB).matcher(stringA);
while (m.find()) {
 q2matches.add(m.start());
}
// stringA ends with stringB
q3 = stringA.endsWith(stringB);
System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
System.out.print("2: Is '" + stringB + "' contained in '" + stringA + "'? ");
if (q2 >= 0) {
 System.out.println("Yes, at index " + q2 + ".");
} else {
 System.out.println("No.");
}
System.out.print("3: How many occurrences of '" + stringB + "' are in '" + stringA + "'? ");
System.out.println(q2matches.size());
for (int i = 0; i < q2matches.size(); i++) {
 System.out.print("At index " + q2matches.get(i) + ".");
}