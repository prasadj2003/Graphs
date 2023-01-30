# Data-Structures-and-Algorithms
## A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).


**Graphs are used to represent networks. The networks may include paths in a city or telephone network or circuit network. For example Google GPS.**

**Graphs are also used in social networks like linkedIn, Facebook. For example, in Facebook, each person is represented with a vertex(or node). Each node is a structure     and contains information like person id, name, gender and locale.**

| Operations | Adjacency Matrix | Adjacency List |
|---------------------|---------------------------------------|------------------------------------------|
|Storage Space        | This representation makes use of VxV matrix, so space required in worst case is O(|V|2). | In this representation, for every vertex we store its neighbours. In the worst case, if a graph is connected O(V) is required for a vertex and O(E) is required for storing neighbours corresponding to every vertex .Thus, overall space complexity is O(|V|+|E|).
