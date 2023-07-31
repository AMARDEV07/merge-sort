#include<iostream>
using namespace std;
void merge(int *arr,int s,int e ){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //new arry
    int *first=new int [len1];
    int *sec=new int [len2];
    //coping value;
   int mainarrayindex=s;
    for(int i=0;i<len1;i++){
   first[i]=arr[mainarrayindex++];

    }
     mainarrayindex=mid+1;

for(int i=0;i<len2;i++){
    sec[i]=arr[mainarrayindex++];

}
//merge two sort array
int index1=0;
int index2=0;
mainarrayindex=s;

while(index1<len1 && index2<len2){
    if(first[index1]<sec[index2]){
        arr[mainarrayindex++]=first[index1++];

    }

else{
    arr[mainarrayindex++]=sec[index2++];

}
}

while(index1<len1){
    arr[mainarrayindex++]=first[index1++];

}
while(index2<len2){
    arr[mainarrayindex++]=sec[index2++];
}

}




void mergesort(int *arr,int s,int e){
    if(s>=e){
        return;
        
    }
    int mid=(s+e)/2;
    //left
    mergesort(arr,s,mid);
    //right
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);


}




int main(){
    int arr[10]={2,1,5,6,3,3,4,5,6};
    int n=10;
    
     mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  } 
   cout<<endl;
    
return 0;

}