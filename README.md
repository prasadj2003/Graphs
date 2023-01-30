# Graphs
## A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).


**Graphs are used to represent networks. The networks may include paths in a city or telephone network or circuit network. For example Google GPS.**

**Graphs are also used in social networks like linkedIn, Facebook. For example, in Facebook, each person is represented with a vertex(or node). Each node is a structure     and contains information like person id, name, gender and locale.**

[Resource](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/)

**Traversal Techniques**
- BFS(Breadth First Search)
  - The breadth-first search (BFS) algorithm is used to search a tree or graph data structure for a node that meets a set of criteria. It starts at the tree’s root or       graph and searches/visits all nodes at the current depth level before moving on to the nodes at the next depth level. Breadth-first search can be used to solve many     problems in graph theory.
- DFS(Depth First Search)
  - Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as    the root node in the case of a graph) and explores as far as possible along each branch before backtracking. 


**Techniques to find MST**
- Prim's Algorithm
- Kruskal's Algorithm


| Prim's Algorithm | Kruskal's Algorithm |
|---------------------------------------- | ---------------------------------------- |
| It starts to build the Minimum Spanning Tree from any vertex in the graph. | It starts to build the Minimum Spanning Tree from the vertex carrying minimum weight in the graph. |
| It traverses one node more than one time to get the minimum distance. | traverses one node only once. |
| Prim’s algorithm has a time complexity of O(V^2), V being the number of vertices and can be improved up to O(E log V) using Fibonacci heaps. | Kruskal’s algorithm’s time complexity is O(E log V), V being the number of vertices. |
| Prim’s algorithm gives connected component as well as it works only on connected graph. | Kruskal’s algorithm can generate forest(disconnected components) at any instant as well as it can work on disconnected components |
| Prim’s algorithm runs faster in dense graphs. | Kruskal’s algorithm runs faster in sparse graphs. |
| It generates the minimum spanning tree starting from the root vertex. | It generates the minimum spanning tree starting from the least weighted edge.  |
| Applications of prim’s algorithm are Travelling Salesman Problem, Network for roads and Rail tracks connecting all the cities etc. | Applications of Kruskal algorithm are LAN connection, TV Network etc. |
| Prim’s algorithm prefer list data structures. | Kruskal’s algorithm prefer heap data structures. |


```C++
#include <bits/stdc++.h> 
using namespace std; 
#define V 4

int primMST(int graph[V][V]) 
{ 

	int key[V];int res=0; 
	fill(key,key+V,INT_MAX);
	bool mSet[V]; key[0]=0;

	for (int count = 0; count < V ; count++) 
	{ 
		int u = -1; 

		for(int i=0;i<V;i++)
		    if(!mSet[i]&&(u==-1||key[i]<key[u]))
		        u=i;
		mSet[u] = true; 
		res+=key[u];

		
		for (int v = 0; v < V; v++) 

			if (graph[u][v]!=0 && mSet[v] == false) 
				key[v] = min(key[v],graph[u][v]); 
	} 
    return res;
} 

int main() 
{ 
	int graph[V][V] = { { 0, 5, 8, 0}, 
						{ 5, 0, 10, 15 }, 
						{ 8, 10, 0, 20 }, 
						{ 0, 15, 20, 0 },}; 

	cout<<primMST(graph); 

	return 0; 
} 
```
