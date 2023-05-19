#include<stdio.h>
#include<string.h>
void swap(char *p,char *q)
{
    char temp = *p;
    *p = *q;
    *q = temp;
}
void permutation(char *a,int l,int r)
{
    if(l==r)
    {
        printf("%s\n",a);

    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(a+l,a+i);
            permutation(a,l+1,r);
            swap(a+l,a+i);
        }
    }
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permutation(str,0,n-1);
}
