class Solution {//recursive solution
  public:
  int rec(int arr[],int l,int h,int k){
      if(l>h)//ele does not exist
      return -1;
      int mid=l+(h-l)/2;
      if(arr[mid]>k)//ele can exist in left half of array
      return rec(arr,l,mid-1,k);
      else if(arr[mid]<k)//ele can exist in right half of array
      return rec(arr,mid+1,h,k);
      else//ele found
      return mid;
  }
    int binarysearch(int arr[], int n, int k) {
        // code here
        return rec(arr,0,n-1,k);
    }
};

class Solution {//iterative approach
  public:
    int binarysearch(int arr[], int n, int k) {
        int l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k)//ele found
            return mid;
            else if(arr[mid]>k)////ele can exist in left half of array
            h=mid-1;
            else//ele can exist in right half of array
            l=mid+1;
        }
        return -1;
    }
};