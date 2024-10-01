 The Java equivalent of your Golang code would look like this:

```java
public class Main {
    public static void main(String[] args) {
        String c = "cat";
        String d = "dog";
        
        if (c.equals(d)) {
            System.out.println(c + " is identical to " + d);
        }
        if (!c.equals(d)) {
            System.out.println(c + " is different from " + d);
        }
        if (c.compareTo(d) > 0) {
            System.out.println(c + " is lexically greater than " + d);
        }
        if (c.compareTo(d) < 0) {
            System.out.println(c + " is lexically lesser than " + d);
        }
        
        // For case-insensitive compare you can use toLowerCase() method:
        String e = c.toLowerCase();
        String f = d.toLowerCase();

        if (e.equals(f)) {
            System.out.println(c + " is identical to " + d);
        } else {
            System.out.println(c + " is different from " + d);
        }
    }
}
```
Please note that:
- Java uses the `equals()` method for exact string comparison.
- `compareTo()` method can be used to compare two strings lexically as well. The return value is an integer less than, equal to, or greater than 0 if the first argument is found, respectively, to be less than, to match, or be greater than the second.
- There's no direct equivalent of Golang's `strings.EqualFold()` in Java but you can achieve case-insensitive string comparison by converting both strings to lower case (or upper) and then compare them using `.equals()`.
