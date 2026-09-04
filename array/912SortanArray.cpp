class Solution {
public:
    vector<int> sortArray(vector<int>& arr) {
        int n = arr.size();
        int minVal = arr[0];
        int maxVal = arr[0];
        for(int i = 1; i < n; i++)
        {
            if(arr[i] < minVal)
                minVal = arr[i];
            if(arr[i] > maxVal)
                maxVal = arr[i];
        }
        vector<int> count(maxVal - minVal + 1, 0);
        for(int i = 0; i < n; i++)
        {
            count[arr[i] - minVal]++;
        }
        int k = 0;

        for(int i = 0; i < count.size(); i++)
        {
            while(count[i] > 0)
            {
                arr[k++] = i + minVal;
                count[i]--;
            }
        }

        return arr;
    }
};