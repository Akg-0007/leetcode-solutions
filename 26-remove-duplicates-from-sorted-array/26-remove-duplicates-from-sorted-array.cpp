class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
          if(arr.size() == 0) return 0; 
        int i=1;
        for(int j=1; j<arr.size(); j++){
            if(arr[j] == arr[j-1])
                continue;
            arr[i] = arr[j];
            i++;
        }
        return i;
    }
};