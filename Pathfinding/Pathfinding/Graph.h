#pragma once
#include "GraphNode.h"
#include <vector>
#include <iostream>
class Graph
{
	
		typedef std::vector<GraphNode*> NodeList;

	public:
		//Creates an empty graph
		
		//Creates a graph with the given number of nodes
		//the contents and links of the nodes are randomised
		Graph(unsigned int a_uiNodeCount);
		void AddNode(GraphNode* a_pNode);
		void RemoveNode(GraphNode* a_pNode);
		

	//private:
		NodeList	m_aNodes;
	
	


	Graph();

	~Graph();
};