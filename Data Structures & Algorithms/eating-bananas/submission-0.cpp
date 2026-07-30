class Solution {
public:

    bool bs(int k, vector<int>& piles, int h) {
        int count = 0;

        for (int i = 0; i < piles.size(); i++) {
            count += (piles[i] + k - 1) / k;
        }

        return count <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int mx = *max_element(piles.begin(), piles.end());
        int mn = 1;

        while (mn <= mx) {

            int k = mn + (mx - mn) / 2;

            if (bs(k, piles, h))
                mx = k - 1;
            else
                mn = k + 1;
        }

        return mn;
    }
};