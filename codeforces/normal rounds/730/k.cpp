#include <iostream>

using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l+1;
    int n2 = r - m;
    int a[n1], b[n2];
    for(int i = 0 ;i < n1; i++){
        a[i] = arr[l+i];
    }
    for(int i = 0; i < n2; i++){
        b[i] = arr[m+1+i];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++;k++;
        }else{
            arr[k] = b[j];
            j++;k++;
        }
    }
    while(i < n1){
        arr[k] = a[i];
        i++;k++;
    }
    while(j < n2){
        arr[k] = b[j];
        j++;k++;
    }
    return;
}
void mergeSort(int arr[], int l, int r)
{
    if(l < r)
        int mid = (l + r)/2;
        mergeSort(arr, l,mid);
        mergeSort(arr, mid + 1, r);
        
        merge(arr, l ,mid, r);
        return;
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    mergeSort(arr, 0 ,7);
    for(int i =0; i < 7; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}