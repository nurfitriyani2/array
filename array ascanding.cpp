#include <iostream>
using namespace std;
int main(){
    bool swapped;
    int temp = 0;
    int indexOfLastUnsortedElement;
    cout<<"Masukan Jumlah Bilangan : ";
    cin>>indexOfLastUnsortedElement;
    int arr[indexOfLastUnsortedElement];
  //for(int i=0; i<=indexOfLastUnsortedElement-1;i++)
    for(int i=0; i<indexOfLastUnsortedElement;i++){
        cout<<"Masukan elemen ke "<<i<<" : ";
        cin>>arr[i];
    }
    do {
        swapped = false;
      //for(int i=0; i<=indexOfLastUnsortedElement-2;i++)
        for(int i = 0; i<indexOfLastUnsortedElement-1;i++){
            if(arr[i]>arr[i+1]){
               temp = arr[i]; 
               arr[i] = arr[i+1];
               arr[i+1] = temp;
               swapped = true;
            }
        }
        cout<<endl;
        for(int i=0; i<indexOfLastUnsortedElement;i++){
            cout<<arr[i]<<" ";
        }
    }while(swapped);
    cout<<endl;
    for(int i = 0; i<indexOfLastUnsortedElement;i++){
        cout << arr[i]<<" ";
    }

}
