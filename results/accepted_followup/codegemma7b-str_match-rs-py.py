def find_match(text, substring):
    match text.find(substring):
        -1: print("Did not find any matches")
        else: print(f"Found match at pos {match}")