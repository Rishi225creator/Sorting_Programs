///Time complexity of insertion sort is O(n2)
///It works like the card game

void insertion_sort(vector<int> arr,int n)
{
  int i,j,key;
  for(i=1;i<n;i++)
  {
    j=i-1;
    key=arr[i];
    while(j>=0&&arr[j]>key)
    {
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=key;
  }
}
