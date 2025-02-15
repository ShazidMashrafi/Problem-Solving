class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          int ans = -1, mx = -1;
          for(int i=0; i<arr.size(); ++i)
          {
              if(arr[i]>mx)
              {
                  ans = mx;
                  mx = arr[i];
              }
              else if(arr[i]>ans && arr[i]<mx)
              {
                  ans = arr[i];
              }
          }
          return ans;
      }
  };