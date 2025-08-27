# include <iostream>
# include <vector>
using namespace std;

// iterative code of binary search 
int binarysearch(vector<int>arr,int tar){
    int st=0 , end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]<tar){
            st=mid+1;
        }else if(arr[mid]>tar){
            end=mid-1;
        }else{
            return mid;
        }
    }return -1;
}
// recursive code of binary search
int recbinary(vector<int> arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid] < tar){
           return  recbinary(arr, tar, mid+1, end);
        }else if(arr[mid] > tar){
           return  recbinary(arr, tar, st, mid-1);
        }else{
            return mid;
        }
    }else{
        return -1;
    }
}
// find the peak value of array

int peakvalue(vector<int>arr){
    int st=1,end=arr.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }  return -1;
}
// find the target in the rotated sorted array 

int rotatedarray(vector<int>arr2,int tarr){
    int st=0,end=arr2.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr2[mid]==tarr){
            return mid;
        }if(arr2[st]<=arr2[mid]){
            if(arr2[st]<=tarr && tarr<=arr2[mid]){
                end=mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(arr2[mid]<=tarr && tarr<=arr2[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }return -1;
}
// single element of sorted array
int singleelem(vector<int> A){
   int n=A.size();
     if(n==1) return A[0];
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(mid==0 && A[0]!=A[1]) return A[mid];
        if(mid==n-1 && A[n-1]!=A[n-2]) return A[mid];

        if(A[mid-1] != A[mid] && A[mid] != A[mid+1]){
            return A[mid];
        }if(mid%2==0){// even 
            if(A[mid]==A[mid-1]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{// odd
                if(A[mid]==A[mid-1]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
        } return -1;
    }   

// Book allocation problem 
bool isvalid(vector<int> a, int n, int m, int maxpages){
    int student=1,pages=0;

    for(int i=0; i<n ;i++){
        if(a[i]>maxpages){
            return false;
        }if(pages+a[i] <= maxpages){
            pages += a[i];
        }else{
            student++;
            pages=a[i];
        }
    }return student > m ? false : true;
}

int bookalloc(vector<int> a,int n,int m){
    if(m>n) {
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    int ans=-1;
    int st=0,end=sum;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(isvalid(a, n, m, mid)){ //left
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
}

// Painter Parition 



int main(){
    vector<int> p={40,30,10,20};
    vector<int> a={15,17,20};
    vector<int> A={1,1,2,2,3,3,4,5,5};
    vector<int> arr2={5,6,7,1,2,3,4};
    vector<int> arr1 = {-1,0,3,5,7,9,12};
    vector<int> arr={0,2,5,14,3};

    int tar = -1;
    int tarr = 7;
    int n=3,m=2;
    int st=0,end=arr.size()-1;
    cout << "single element in sorted array : " << bookalloc(a,n,m);
        return 0;
}