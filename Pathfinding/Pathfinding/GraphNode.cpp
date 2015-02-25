#include "GraphNode.h"
GraphNode::GraphNode()
{

	
}

void Edge::PrintEnd()
{
	std::cout << m_pEnd->m_iNodeNumber << std::endl;
}



void GraphNode::PrintNeighbors()
{
	for (int i = 0; i < m_aEdges.size(); i++)
	{
		if (m_aEdges[i].m_pStart != this ||
			m_aEdges[i].m_pEnd == this)
		{
			// skip over
			continue;
		}

		std::cout << m_aEdges[i].m_pEnd->m_iNodeNumber << std::endl;
	}
}
bool GraphNode::CheckIfNeighbor(GraphNode* nodeB)
{
	if (this->m_aEdges[0].m_pEnd == nodeB->m_aEdges[1].m_pStart ||
		this->m_aEdges[0].m_pStart == nodeB->m_aEdges[1].m_pEnd)
	{
		return true;
	}
}

void GraphNode::RemoveNode(GraphNode* node)
{
	for (int i = 0; i < m_aEdges.size(); i++)
	{

	}

}

GraphNode::~GraphNode()
{
}