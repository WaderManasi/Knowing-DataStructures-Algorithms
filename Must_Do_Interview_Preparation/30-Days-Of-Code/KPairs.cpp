//Solution
class Solution{

	public:
	int find_min(int a[], int n, int k) {
        int s = 0, pair = 0;
        for (int i = 0; i < n; i++)
        {
            pair = pair + (a[i] / 2);
            if (a[i] % 2 == 0)
                s += (a[i] - 2) / 2;
            else
                s += (a[i] - 1) / 2;
        }
        if (k > pair) return -1;
        if (k <= s) return 2 * (k - 1) + n + 1;
        return 2 * s + n + (k - s);
    }

};