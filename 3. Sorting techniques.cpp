#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <time.h>
#include <iostream>
using namespace std;

int comp=0;


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
 
void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
			comp++;
		}
		else {
			arr[k] = R[j];
			j++;
			comp++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int l,int r){
	if(l>=r){
		return;
	}
	int m =l+ (r-l)/2;
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	merge(arr,l,m,r);
}

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 )
		{if(arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
			comp++;}
			else{
				comp++;
				break;
			}
		}
		arr[j + 1] = key;
	}
//	return count;
}


int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1); 
 
    for (int j = low; j <= high - 1; j++)
    {
        
        if (arr[j] < pivot)
        {
            i++; 
            swap(&arr[i], &arr[j]);
        }
        comp++;
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
       
        int pi = partition(arr, low, high);
 
       
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)    {
    for (j = 0; j < n-i-1; j++){
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
         comp++;
        }
   }
}


void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++){
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
         comp++;
        }    
        swap(&arr[min_idx], &arr[i]); 
    } 
} 



void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}



int main()
{
	int ext;
	int randomnum,randomval,n=0;
  begin:
  	comp=0;
  	srand(time(NULL));
	randomnum =  10 + rand() % (70);
	
	  int arr[randomnum];
	  
	  for(int j= 0;j<randomnum;j++){
	 	 randomval = rand()+1;
	 	 arr[j]=randomval;
	 	 
	 	// cout<<randomval<<endl;
	 }
	 cout<<"A random array is created with "<<randomnum<<" elements:-\n\n";
	 printArray(arr, randomnum);
	 cout<<"\n\nPlease select the sorting method you want to use :- \n";
	 cout<<"1. Merge sort \n2. Insertion sort\n3. Quick sort\n4. Bubble Sort\n5. Selection sort\nPress any ohter key to exit.\n\n";
	 cout<<"Enter your choice :- ";
	 cin>>n;
	 
	 
	 switch(n){
	 	case 1 : mergeSort(arr, 0, randomnum - 1);
	 			 break;
	 	case 2 : insertionSort(arr, randomnum);
	 			 break;
	 	case 3 : quickSort(arr, 0, randomnum - 1);
	 			 break;
	 	case 4 : bubbleSort(arr, randomnum);
	 			 break;
	 	case 5 : selectionSort(arr, randomnum);
	 			 break;
	 	default : exit(0);
	 }
	 
	cout<<"Sorted array is :- \n";
	printArray(arr, randomnum);
	cout<<"\n\nNo. of comparisons :- "<<comp;
  	cout<<"\n\nPress 1 to search again / any other key to exit : ";
  cin>>ext;
  if(ext == 1)
     goto begin;
  	
  	
	return 0;
}
