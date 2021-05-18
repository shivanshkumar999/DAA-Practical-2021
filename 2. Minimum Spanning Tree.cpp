#include <bits/stdc++.h>
using namespace std;


int minKey(int key[], bool mstSet[], int V)
{

	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (mstSet[v] == false && key[v] < min)
			min = key[v], min_index = v;

	return min_index;
}

void printMST(int parent[], int **graph, int V, int strt)
{
	cout<<"Edge \tWeight\n";
	for (int i = 1; i < V; i++)
		cout<<parent[i]+strt<<" - "<<i+strt<<" \t"<<graph[i][parent[i]]<<" \n";
}

void primMST(int **graph,int V, int strt)
{
	
	int parent[V];
	
	
	int key[V];
	

	bool mstSet[V];


	for (int i = 0; i < V; i++)
		key[i] = INT_MAX, mstSet[i] = false;

	key[0] = 0;
	parent[0] = -1; 


	for (int count = 0; count < V - 1; count++)
	{
		
		int u = minKey(key, mstSet, V);

	
		mstSet[u] = true;

	
		for (int v = 0; v < V; v++)

			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
				parent[v] = u, key[v] = graph[u][v];
	}

	
	printMST(parent, graph, V, strt);
}


int main()
{
	int nv,ne,start,help,ew,ext;
	begin:
	cout<<"Enter the no. of vertices : ";
	cin>>nv;
	
	cout<<"Enter the no. of edges : ";
	cin>>ne; 
	
	if(nv<0||ne<0){
		cout<<"\n\nError : no. of vertices or edges cannot be zero.\n\n";
		goto begin;
	}
	cout<<"Enter the no. from which graph starts : ";
	cin>>start;
	
	int **graph = new int*[nv];
	for(int i=0;i<nv;i++){
		graph[i]=new int[nv];
	}
    for(int i=0;i<nv;i++){
        for(int j=0;j<nv;j++){
        	graph[i][j]=0;
		}	
	}
	
	cout<<"Press 0 to enter edges manually or Press 1 to enter edges with help : ";
	cin>>help;
	cout<<endl;
	if(help==1){
		for(int i = 0;i<nv;i++){
    		for(int j = i;j<nv;j++){
    		  err1:
    			cout<<"Enter weight of the edge between "<<i+start<<" and "<<j+start<<" vertices :(0 if no edge present) : ";
    			cin>>ew;
    			if(ew>=0){
    				graph[i][j]=ew;
					graph[j][i]=ew;	
				}
				else{
					cout<<"\n\nError : weight of an edge cannot be zero.\n\n";
					goto err1;
				}
			}
		}
   } 
   else if(help ==0){
	
		while(ne!=0){
			int i,j;
			cout<<"Enter starting vertex, ending vertex  and weight of an edge with a space between all of them : ";
			cin>>i>>j>>ew;
			graph[i-start][j-start]=ew;
			graph[j-start][i-start]=ew;	
			ne--;
		}
	}  

  cout<<"\n\nThe minimum Spanning Tree is :-\n\n";
	primMST(graph,nv,start);
  cout<<"\n\nPress 1 to search again / any other key to exit : ";
  cin>>ext;
  if(ext == 1)
     goto begin;

	return 0;
}
