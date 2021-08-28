#include <stdio.h>
#include<stdlib.h>
// N vertices and M Edges


int N, M;

// Function to create Adjacency Matrix
void createAdjMatrix(int Adj[][N + 1],int arr[][3])
{

	// Initialise all value to this
	// Adjacency list to zero
	for (int i = 0; i < N + 1; i++) {

		for (int j = 0; j < N + 1; j++) {
			Adj[i][j] = 0;
		}
	}

	// Traverse the array of Edges
	for (int i = 0; i < M; i++) {

		// Find X and Y of Edges
		int x = arr[i][0];
		int y = arr[i][1];
        // int z = arr[i][2];
		// Update value to 1
		Adj[x][y] = 1;
		Adj[y][x] = 1;
	}
}

// Function to print the created
// Adjacency Matrix
void printAdjMatrix(int Adj[][N + 1])
{

	// Traverse the Adj[][]
	for (int i = 0; i < N ; i++) {
		for (int j = 0; j < N ; j++) {

			// Print the value at Adj[i][j]
			printf("%d ", Adj[i][j]);
		}
		printf("\n");
	}
}

// Driver Code
int main()
{

	// Number of vertices
    printf("Enter the Number of vertics\n");
    scanf("%d",&N);
	// Given Edges and weight
    printf("Enter the Number of Edge\n");
    scanf("%d",&M);
    int arr[M][3];
    for(int i=0;i<M;i++){
        printf("Enter the edge and weight of the graph\n");
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        arr[i][0]=a;
        arr[i][1]=b;
        arr[i][2]=c;
    }
	// int arr[][2]
	// 	= { { 0, 1 }, { 0, 2 },
	// 		{ 1, 2 }, { 1, 3 },
	// 		{ 2, 3 } };
			
	

	// Number of Edges
	// M = sizeof(arr) / sizeof(arr[0]);

	// For Adjacency Matrix
	int Adj[N + 1][N + 1];

	// Function call to create
	// Adjacency Matrix
	createAdjMatrix(Adj, arr);

	// Print Adjacency Matrix
	printAdjMatrix(Adj);

	return 0;
}