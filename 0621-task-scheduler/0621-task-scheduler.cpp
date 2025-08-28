class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> cnt(26), cd(26, 0);
        for (char c : tasks) cnt[c - 'A']++;
        if (n == 0) return tasks.size();
        int t = 0, rem = tasks.size();
        while (rem > 0) {
            t++;
            int p = -1;
            for (int i = 0; i < 26; ++i)
                if (cd[i] == 0 && cnt[i] > 0)
                    if (p == -1 || cnt[i] > cnt[p]) p = i;
            if (p != -1) {
                cnt[p]--;
                cd[p] = n + 1;
                rem--;
            }
            for (int i = 0; i < 26; ++i)
                if (cd[i] > 0) cd[i]--;
        }
        return t;
    }
};
