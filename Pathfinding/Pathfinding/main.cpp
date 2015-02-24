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
	
	
	GraphNode* anotherName = new GraphNode();
	GraphNode* anotherName2 = new GraphNode();


	anotherName->m_iNodeNumber = 1;
	anotherName2->m_iNodeNumber = 2;

	Edge edge0;
	edge0.m_pStart = anotherName;
	edge0.m_pEnd = anotherName2;
	anotherName->m_aEdges.push_back(edge0);





	std::cout << anotherName->m_iNodeNumber << std::endl;
	std::cout << anotherName2->m_iNodeNumber << std::endl;

	std::cout << anotherName->m_aEdges[0].m_pEnd << std::endl;
	anotherName->m_aEdges[0].m_pEnd->m_iNodeNumber = 3;

	std::cout << anotherName2->m_iNodeNumber << std::endl;




	system("PAUSE");
	return 0;

};