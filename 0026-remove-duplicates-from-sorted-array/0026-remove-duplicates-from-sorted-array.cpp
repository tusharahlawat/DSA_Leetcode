class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
    if (arr.empty()) return 0;

    int j = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    arr.resize(j + 1);
    cout << j + 1 << endl;
    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return j + 1;
}

};