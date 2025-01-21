Error: `incompatible types: double cannot be converted to String`.

Fix: Cast the numeric value to string before using it for comparison.

```java
demo_compare((double) numA, (double) numB + "", "numerically");
```
