#include <iostream>
#ifndef _GRAPH_H_
#define _GRAPH_H_
#include <string>
#include <vector>
#include "Graph.h"
#include "GraphNode.h"




#endif //_GRAPH_H_




GraphNode::EdgeList* practiceName;
struct Edge;




int main(int argc, char* argv[])
{
	
	GraphNode* node0 = new GraphNode();
	



	GraphNode* node1 = new GraphNode();
	GraphNode* node2 = new GraphNode();
	GraphNode* node3 = new GraphNode();
	/*GraphNode* node4 = new GraphNode();
	GraphNode* node5 = new GraphNode();
	GraphNode* node6 = new GraphNode();
	GraphNode* node7 = new GraphNode();*/

	Edge edge0(node0, node1, 1);
	node0->m_aEdges.push_back(edge0);
	node1->m_aEdges.push_back(edge0);

	Edge edgeA0(node1, node0, 1);
	node0->m_aEdges.push_back(edgeA0);
	node1->m_aEdges.push_back(edgeA0);

	Edge edge1(node1, node2, 3);
	node1->m_aEdges.push_back(edge1);
	node2->m_aEdges.push_back(edge1);

	Edge edgeA1(node2, node1, 3);
	node1->m_aEdges.push_back(edgeA1);
	node2->m_aEdges.push_back(edgeA1);

	Edge edge2(node1, node3, 5);
	node1->m_aEdges.push_back(edge2);
	node3->m_aEdges.push_back(edge2);



	Graph myGraph;
	node0->m_iNodeNumber = 0;
	node1->m_iNodeNumber = 1;
	node2->m_iNodeNumber = 2;
	node3->m_iNodeNumber = 3;



	myGraph.AddNode(node0);
	myGraph.AddNode(node1);
	myGraph.AddNode(node2);
	myGraph.AddNode(node3);









	//std::cout << node0->m_iNodeNumber << std::endl;
	//std::cout << node1->m_iNodeNumber << std::endl;

	//std::cout << node0->m_aEdges[0].m_pEnd << std::endl;
	//node0->m_aEdges[0].m_pEnd->m_iNodeNumber = 3;

	//std::cout << node1->m_iNodeNumber << std::endl;
	
	//edge0.PrintEnd();
	node1->PrintNeighbors();
	std::cout<<node1->CheckIfNeighbor(node0)<< std::endl;

	system("PAUSE");
	return 0;

};