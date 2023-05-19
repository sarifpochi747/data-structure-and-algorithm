#include<stdio.h>
#include <stdbool.h>

int Sum(int A[], int n ,int k)
{ bool S[n+1][k+1];

     for (int i=0; i<=n; i++) S[i][0] = true;
     for (int j=1; j<=k; j++) S[0][j] = false;

     for (int j=1; j<=k; j++) {
           for (int i=1; i<=n; i++){
             if (j < A[i-1])        // out-of-table
              S[i][j] = S[i-1][j];
             else
             S[i][j] = S[i-1][j] || S[i-1][j-A[i-1]];
                 }
           }

return S[n][k];
}

int main()
{  int A[] = {3, 4, 5, 2};
   int k = 8;
   int n = sizeof(A)/sizeof(int);
      printf("%d", Sum(A, n, k));
  return 0;
}

