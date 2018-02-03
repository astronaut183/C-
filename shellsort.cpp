# C-
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
