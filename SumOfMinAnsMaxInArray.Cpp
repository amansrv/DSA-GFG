// Sum of minimum and maximum element of an Array

class Solution
{
   int GetMin(int A[], int N){
       int min = INT_MAX;
       for(int i=0; i<N; i++){
           if(A[i] < min){
               min = A[i];
           }
       }
       return min;
   };
   
   int GetMax(int A[], int N){
       int max = INT_MIN;
       for(int i=0; i<N; i++){
           if(A[i] > max){
               max = A[i];
           }
       }
       return max;
   };
   
   int MinsumMax(int A[], int N){
       
       int Min = GetMin(A,N);
       int Max = GetMax(A,N);
       return Min + Max;
   };
   
   public:
    int findSum(int A[], int N)
    {
    	return MinsumMax(A,N); 
    }

};
