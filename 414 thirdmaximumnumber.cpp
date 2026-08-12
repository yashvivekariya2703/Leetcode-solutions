class Solution {
public:
    int thirdMax(vector<int>& arr) {

        int key = 0, i = 0, j = 0, count = 0;
        int n = arr.size();

      
        for(int i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while(j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }

        int max = arr[n - 1];

     
        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] == max)
            {
                continue;
            }
            else
            {
                max = arr[i];
                count++;
            }

            if(count == 2)
            {
                return arr[i];
            }
        }

        return arr[n - 1];
    }
};