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