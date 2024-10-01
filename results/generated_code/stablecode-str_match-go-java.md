Below is the Java equivalent of your Golang code:

```java
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class StringMatchDemo {

    // Method to check if the first string starts with second string
    static boolean startsWith(String first, String second) {
        return first.startsWith(second);
    }

    // Method to determine if the first string contains the second string at any location
    static boolean contains(String first, String second) {
        Pattern pattern = Pattern.compile("\\Q" + second + "\\E", Pattern.CASE_INSENSITIVE));
        Matcher matcher = pattern.matcher(first);

        return matcher.find();
    }

    // Method to determine if the first string ends with the second string
    static boolean endsWith(String first, String second) {
        return first.endsWith(second);
    }

    public static void main(String[] args) {
        System.out.println("1. Does 'abracadabra' start with 'abr'? " + startsWith("abracadabra", "abr")));
        System.out.println("2. Does 'abracadabra' contain 'abr' at any location? " + contains("abracadabra", "abr")));
        System.out.println("3. Does 'abracadabra' end with 'abr'? " + endsWith("abracadabra", "abr")));
    }
}
```
This Java code is a literal conversion of your Golang code into the equivalent Java syntax. The methods `startsWith`, `contains` and `endsWith` are used to determine if the first string starts with second string, contains the second string at any location and ends with the second string respectively. These methods are then called in the main function.
