**Error:** The `compareTo()` method is not available for the `Object` type.

**Fix:** Explicitly cast the objects to the required type before calling `compareTo()`.

```java
System.out.println(
    a
        + " is "
        + ((((Comparable<String>) a).compareTo(b) < 0) ? "" : "not ")
        + comparisonType
        + " ordered before "
        + b
        + '.');

System.out.println(
    a
        + " is "
        + ((((Comparable<String>) a).compareTo(b) > 0) ? "" : "not ")
        + comparisonType
        + " ordered after "
        + b
        + '.');
```
