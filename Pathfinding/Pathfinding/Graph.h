#pragma once
#include "GraphNode.h"
#include <vector>
#include <iostream>
#include <stack>
#include <queue>


class Graph
{
	
		typedef std::vector<GraphNode*> NodeList;

	public:
		//Creates an empty graph
		
		//Creates a graph with the given number of nodes
		//the contents and links of the nodes are randomised
		Graph(unsigned int a_uiNodeCount);
		void AddNode(GraphNode* a_pNode);
		void RemoveNode(GraphNode* node);
		void ResetVisited();

		void CreateGraph(int  id,float xSet, float ySet, int xNum, int yNum);
		
		bool SearchDFS(GraphNode* a_pStart, GraphNode* a_pEnd);
		bool SearchBFS(GraphNode* a_pStart, GraphNode* a_pEnd);


	//private:
		NodeList	m_aNodes;
	
	


	Graph();

	~Graph();
};