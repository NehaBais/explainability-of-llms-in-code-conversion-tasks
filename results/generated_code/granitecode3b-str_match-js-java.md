Sure, here's the Java code that does the same thing as the given JavaScript code:
```java
String stringA = "tacoloco";
String stringB = "co";
boolean q1; // Does stringA start with stringB?
int q2; // Is stringB contained in stringA?
List q2matches = new ArrayList(); // multiple matches
boolean q3; // Does stringA end with stringB?

// stringA starts with stringB
q1 = stringA.startsWith(stringB);

// stringA contains stringB
q2 = stringA.indexOf(stringB);

// multiple matches
Matcher m;
Pattern p = Pattern.compile(stringB);
m = p.matcher(stringA);
while (m.find()) {
	q2matches.add(m.start());
}

// stringA ends with stringB
q3 = stringA.endsWith(stringB);

System.out.println("1: Does '"+stringA+"' start with '"+stringB+"'? " + ( q1 ? "Yes." : "No."));
System.out.println("2: Is '"+stringB+"' contained in '"+stringA+"'? " + (~q2 ? "Yes, at index "+q2+"." : "No."));
if (~q2 && !q2matches.isEmpty()) {
	System.out.println("   In fact, it happens " + q2matches.size() + " times within '"+stringA+"', at index" + (q2matches.size() > 1 ? "es" : "") + " " + String.join(", ", q2matches) + ".");
}
System.out.println("3: Does '"+stringA+"' end with '"+stringB."'? "   + ( q3 ? "Yes." : "No."));
```
This Java code uses the `startsWith`, `indexOf`, and `endsWith` methods of the `String` class to perform string matching as described in the requirement. It also uses a regular expression to find multiple occurrences of the second string within the first string. The output is printed using the `System.out.println` method.

