  #include<iostream>
using namespace std;

typedef long long int ll;


void merge(int arr[], int low, int mid, int high) {
    vector<int> temp; 
    int left = low;      
    int right = mid + 1;   

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }


    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Using divide and Conquer approach //

void mergeSort(int arr[], int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}



int main(){
    int n;
    cout << "Enter the size of the Array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n <<" " << "Elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    mergeSort(arr,0,n-1);

    cout << "Sorted Array" << endl;
    for(auto &element:arr){
        cout << element << " ";
    }
    cout << endl;



}