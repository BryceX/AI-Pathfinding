#pragma once
#include <vector>
#include <iostream>
class GraphNode;
struct Edge
{
	Edge() {}
	~Edge() {}
	Edge(GraphNode* start, GraphNode* end, float cost)
	{
		m_pStart = start;
		m_pEnd = end;
		m_fCost = cost;
	}



	GraphNode*	m_pStart;
	GraphNode*	m_pEnd;
	float		m_fCost;
	void PrintEnd();
	
};

class GraphNode
{
	
	public:
	GraphNode(int a_iNum);
	void PrintNeighbors();
	bool CheckIfNeighbor(GraphNode* nodeB);
	bool Visited = false;
	void IsNeighbor();
	void RemoveNode(GraphNode* node);
	
	void SetNode(int id, float x, float y );
	float x;
	float y;
	int	id;
	typedef std::vector<Edge> EdgeList;
	EdgeList  m_aEdges;


	GraphNode();

	~GraphNode();
};