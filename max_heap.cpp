#include<bits/stdc++.h>
using namespace std;

void ck(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< A[i]<< " ";
    }
    cout<<endl;
}

///maxheap
void maxheap(int A[],int n,int i)
{
    int largest,l,r;

    l=2*i+1;
    r=2*i+2;

    if(l<n && A[l]>A[i])
        largest=l;
    else
        largest=i;

    if(r<n && A[r]>A[largest])
        largest=r;

    if(largest!=i)
    {
        swap(A[i],A[largest]);
        maxheap(A,n,largest);
    }
}

void heapsort(int A[],int n)
{

    for(int i=n/2-1; i>=0; i--)//Build heap
    {
        maxheap(A,n,i);
        //ck(A,n);
    }

/*
    for(int i=n-1; i>0; i--)//make hipshoting
    {
        swap(A[0],A[i]);
        //ck(A,n);
        maxheap(A,i,0);
    }
*/
}

int main()
{
    int A[]= {30, 50, 60, 70, 10, 40, 20};
    int n= sizeof(A)/sizeof(A[0]);
    //cout<<n<<endl;
    for(int i=0; i<n; i++)//showing input data
    {
        cout<< A[i]<< " ";
    }
    cout<<endl<<endl;
    heapsort(A,n);

    cout<< "max heap tree"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< A[i]<<endl;
    }

    return  0;
}
