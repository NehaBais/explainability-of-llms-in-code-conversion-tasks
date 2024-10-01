Here is the equivalent Java code for your JavaScript snippet:

```java
public class Main {
    public static void main(String[] args) {
        String stringA = "tacoloco";
        String stringB = "co";

        boolean q1, q2, q3;
        int m;
        ArrayList<Integer> q2matches = new ArrayList<>();

        // stringA starts with stringB
        q1 = stringA.startsWith(stringB);

        // stringA contains stringB
        q2 = stringA.indexOf(stringB) != -1;

        // multiple matches
        Pattern pattern = Pattern.compile(stringB);
        Matcher matcher = pattern.matcher(stringA);
        while (matcher.find()) {
            q2matches.add(matcher.start());
        }

        // stringA ends with stringB
        q3 = stringA.endsWith(stringB);

        System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
        System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (q2 ? "Yes, at index " + q2matches.get(0) : "No."));
        if (q2 && q2matches.size() > 1){
            System.out.println("Additionally, it happens "+q2matches.size()+" times within '"+stringA+"', At index"+ (q2matches.size() > 1 ? "es" : "") + " "+q2matches.toString().replaceAll("\\[|\\]", "").replaceAll(", ", ", ")+".");
        }
        System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
    }
}
```

This Java code does the same job as your JavaScript snippet: it checks if `stringA` starts with `stringB`, contains `stringB`, and ends with `stringB`. It also finds all occurrences of `stringB` within `stringA`. The key difference is that instead of using `indexOf()`, we use `startsWith()` and `endsWith()` for matching. For multiple matches, we're using a regular expression pattern and its Matcher class. We put the index of each match in an ArrayList and print them out later if there are more than one.
