Here is the converted code from JavaScript to Java that demonstrates the three types of string matching as required:
```
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
if (~q2) {
 System.out.println("Yes, at index " + q2 + ".");
} else {
 System.out.println("No.");
}
if (q2matches.size() > 1) {
 System.out.print("   In fact, it happens " + q2matches.size() + " times within '" + stringA + "', at index" + (q2matches.size() > 1 ? "es" : "") + " ");
 for (int i = 0; i < q2matches.size(); i++) {
 System.out.print(q2matches.get(i) + (i == q2matches.size() - 1 ? "." : ", "));
 }
} else if (q2 >= 0) {
 System.out.println("Yes, at index " + q2 + ".");
} else {
 System.out.println("No.");
}
System.out.print("3: Does '" + stringA + "' end with '" + stringB + "'? ");
if (q3) {
 System.out.println("Yes.");
} else {
 System.out.println("No.");
}
```
The optional requirements are also handled in the converted code as follows:
1. The index of the first occurrence of stringB within stringA is printed for part 2.
2. If there are multiple occurrences of stringB within stringA, their indices are printed for part 2.

