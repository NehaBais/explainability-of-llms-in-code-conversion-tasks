```java
public class StringMatching {

    public static void main(String[] args) {
        String stringA = "tacoloco";
        String stringB = "co";

        // stringA starts with stringB
        boolean q1 = stringA.startsWith(stringB);

        // stringA contains stringB
        int q2 = stringA.indexOf(stringB);

        // multiple matches
        int count = 0;
        for (int i = 0; i < stringA.length(); i++) {
            if (stringA.substring(i, i + stringB.length()).equals(stringB)) {
                count++;
            }
        }

        // stringA ends with stringB
        boolean q3 = stringA.endsWith(stringB);

        System.out.println("1: Does '" + stringA + "' start with '" + stringB + "'? " + (q1 ? "Yes." : "No."));
        System.out.println("2: Is '" + stringB + "' contained in '" + stringA + "'? " + (q2 != -1 ? "Yes, at index " + q2 + "." : "No."));
        if (q2 != -1 && count > 1) {
            System.out.println("   In fact, it happens " + count + " times within '" + stringA + "', at index" + (count > 1 ? "es" : "") + " " + q2 + ".");
        }
        System.out.println("3: Does '" + stringA + "' end with '" + stringB + "'? " + (q3 ? "Yes." : "No."));
    }
}
```

