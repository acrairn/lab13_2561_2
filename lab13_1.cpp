#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
int i,k;
//Write your code here.
for(int i=1;i<N;i++){
	int g=0;
	for (int j=0;j<N;j++){
		if(j==i){
			cout << "[" << d[j] << "]";
		}else{
			cout << d[j] << " ";
		}
	}
	for(k=0;k<i;k++){
		
		if(d[k]<d[i]){
			g++;
			swap(d,i,k);
		}
		
	}
	 cout << "=> ";
	 for(int l=0;l<N;l++){
		if(l==(k-g)) cout << "[" << d[l] << "]";
		else cout<<d[l] << " ";
	}
		cout << "\n";	
	

}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
