#include "Graph.h"
Graph::Graph()
{

}
void Graph::AddNode(GraphNode* a_pNode)
{
	m_aNodes.push_back(a_pNode);
}
Graph::~Graph()
{
}