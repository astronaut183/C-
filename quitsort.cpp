#include <iostream>

using namespace std;




int fastsort1(int a[], int low, int high){
	int temp;
	int x=a[low];
	while(low<high){
		while(low<high&&x<=a[high]) 
			high--;
			
		//swap(a[low],a[high]);
		temp = a[low];
		a[low]=a[high];
		a[high]=temp;				

		
		while(low<high&&x>=a[low]) 
			low++;
			
			
		//swap(a[low],a[high]);
		temp = a[low];
		a[low]=a[high];
		a[high]=temp;	
	//cout<<low<<" ";
	}
	
	return low;
}


void fastsort(int a[], int low, int high){
	if(low<high){
		int part=fastsort1(a,low,high);
		fastsort(a,low,part-1);
		fastsort(a,part+1,high);
	}
	
}
int main() {
	int a[10]={8,9,10,4,1,45,2,13,1,6};
	fastsort(a,0,9);
	for(int i=0;i<10;i++){
		cout<<a[i]<<"  ";
	}
}
