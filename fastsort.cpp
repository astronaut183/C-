
#include <iostream>

using namespace std;

void shellsort(int arr[],int len){
	int d=(len+1)/2+1;
	int temp;
	while(d>0){
		for(int i=0;i<d;i++){
			for(int j=i;j<len;j+=d){
				for(int k=j+d;k<len;k+=d){
					if(arr[k]<arr[j]){
						temp=arr[k];
						arr[k]=arr[j];
						arr[j]=temp;
					}
				}
			}
		}
		d=d/2;
	}
}

int main() {
	int a[10]={8,9,10,4,1,45,2,13,1,6};
	shellsort(a,10);
	for(int i=0;i<10;i++){
		cout<<a[i]<<"  ";
	}
}
