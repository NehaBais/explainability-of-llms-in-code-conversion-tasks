fmt.Println(
    "YUP  == YUP:", strings.EqualFold("YUP", "YUP"),
    "BALL  < BELL:", strings.Compare("BALL", "BELL") < 0,
    "24  > 123:", 24 > 123,
    // Comparison between two numbers will result in false, but the types are different, so it's not a string comparison
    "5 == 5.0:", 5 == 5.0)
)