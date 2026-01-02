class Solution {
  public:
    void sort012(vector<int> &arr) 
    {
     sort(arr.begin(), arr.end()); 
}

int main() {
vector<int> arr = {0, 1, 2, 0, 1, 2};
    sort012(arr);
for (int i = 0; i < arr.size(); i++)
cout << arr[i] << " ";
    return 0;
}
};