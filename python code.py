#Pattern Searching Code in Python
def naive_search(text, pattern):
    """
    Naive pattern searching algorithm.
    """
    occurrences = []
    n = len(text)
    m = len(pattern)

    for i in range(n - m + 1):
        j = 0
        while j < m and text[i + j] == pattern[j]:
            j += 1
        if j == m:
            occurrences.append(i)
    return occurrences

def print_results(text, pattern, occurrences):
    """
    Function to print search results.
    """
    print(f"Text: '{text}'")
    print(f"Pattern: '{pattern}'")
    if occurrences:
        print("Pattern found at positions:", occurrences)
    else:
        print("Pattern not found in the text.")

# Get user input
text = input("Enter the text: ")
pattern = input("Enter the pattern to search: ")

# Perform naive search
occurrences = naive_search(text, pattern)
print_results(text, pattern, occurrences)
