// C++ program for Naive Pattern
// Searching algorithm
#include <bits/stdc++.h>
using namespace std;

void search(string& pat, string txt)
{
    int M = pat.size();
    int N = txt.size();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j
            == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cout << "Pattern found at index " << i << endl;

       // If a match is found, slide the pattern by one position
        // to check for further matches
        if (j == M - 1)
            i++;
    }
}

// Driver's Code
int main()
{
    string txt = "AABAACAADAABAABAA";
    string pat = "AABA";

    // Function call
    search(pat, txt);
    return 0;
}


