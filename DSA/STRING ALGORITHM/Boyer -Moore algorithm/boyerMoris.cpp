 #include<bits/stdc++.h>
 //#define int long long int
 using namespace std;
 const int mod=(int)(1e9+7);
 //const int INF = 9e15;
 #define NO_OF_CHARS 256

using namespace std;


void badCharHeuristic(const string &pattern, int size, vector<int> &badCharTable) {
    fill(badCharTable.begin(), badCharTable.end(), -1);
    for (int i = 0; i < size; i++) {
        badCharTable[(int)pattern[i]] = i;
    }
}

// Function to perform the Boyer-Moore search
vector<int> boyerMooreSearch(const string &text, const string &pattern) {
    int m = pattern.size();
    int n = text.size();

    vector<int> badCharTable(NO_OF_CHARS);
    badCharHeuristic(pattern, m, badCharTable);

    vector<int> positions;
    int s = 0; 

    while (s <= (n - m)) {
        int j = m - 1;
        while (j >= 0 && pattern[j] == text[s + j])
            j--;
        if (j < 0) {
            positions.push_back(s);
            s += (s + m < n) ? m - badCharTable[text[s + m]] : 1;
        } else {
            s += max(1, j - badCharTable[text[s + j]]);
        }
    }
    return positions;
}

 int32_t main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    string text, pattern;
    cout << "Enter Text: "; cin>>text; 
    cout << "Enter Pattern: "; cin>>pattern;
    vector<int> positions = boyerMooreSearch(text, pattern);
    if (!positions.empty()) {
        for (int pos : positions) {
            cout << pos << " ";
        }
    } else {
        cout << "Pattern not found in text.";
    }

    return 0;
 }