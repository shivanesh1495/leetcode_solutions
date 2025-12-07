#include <unordered_set>
class Solution {
public:
    int partitionString(string s) {
    unordered_set<char> seen;
    int partitions = 1; // at least 1 substring will exist

    for (char c : s) {
        // if character already in current substring → start new substring
        if (seen.count(c)) {
            partitions++;
            seen.clear();
        }
        seen.insert(c);
    }

    return partitions;
    }
};