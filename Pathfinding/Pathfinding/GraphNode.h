#pragma once
#include <vector>
class GraphNode
{

	struct Edge
	{
		GraphNode*	m_pStart;
		GraphNode*	m_pEnd;

		float		m_fCost;
	};
	public:
	GraphNode(int a_iNum);


	int		m_iNodeNumber;
	typedef std::vector<Edge> EdgeList;
	EdgeList   m_aEdges;


	GraphNode();

	~GraphNode();
};