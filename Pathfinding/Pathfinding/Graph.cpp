#include "Graph.h"
Graph::Graph()
{

}
void Graph::AddNode(GraphNode* a_pNode)
{
	m_aNodes.push_back(a_pNode);
}

void Graph::RemoveNode(GraphNode* node)
{
	//loop through every node in the vector
	for (int i = 0; i < m_aNodes.size(); i++)
	{
		//looping through every edge in each node
		for (int j = 0; j < m_aNodes[i]->m_aEdges.size(); j++)
		{
			// check if the edge ends with the node we are trying to remove
			if (m_aNodes[i]->m_aEdges[j].m_pEnd == node)
			{
				// erase that edge
				m_aNodes[i]->m_aEdges.erase(m_aNodes[i]->m_aEdges.begin()+j);
			}

		}
		
	}
	
	// loop over each node in the node list
	for (int i = 0; i < m_aNodes.size(); ++i)
	{
		if (node == m_aNodes[i])
		{
			m_aNodes.erase(m_aNodes.begin()+i);
			break;
		}
	}
		// check if we've found the node we're trying to remove
			
			// remove it
		
}

void Graph::ResetVisited()
{
	bool Visited = false;
}



bool Graph::SearchDFS(GraphNode* a_pStart, GraphNode* a_pEnd)//Add to SearchDFS function
{
	std::stack<GraphNode*> oNodeStack;
	oNodeStack.push(a_pStart);

	//add to the SearchDFS function

	//keep looping until the stack is empty. 
	//This will only happen once we've checked every node. 
	while (!oNodeStack.empty())
	{
		//the rest of the algorithm goes in here
		GraphNode* pCurrent = oNodeStack.top();
		oNodeStack.pop();

		if (pCurrent->Visited == true)
		{
			continue;
		}

		pCurrent->Visited = true;

		if (pCurrent == a_pEnd)
		{
			return true;
		}

		for (int i = 0; i < pCurrent->m_aEdges.size(); ++i)
		{
			oNodeStack.push(pCurrent->m_aEdges[i].m_pEnd);
		}
	}

	//return false if we didn't find a_pEnd
	return false;
}


bool Graph::SearchBFS(GraphNode* a_pStart, GraphNode* a_pEnd)//Add to SearchDFS function
{
	std::queue <GraphNode*> oNodeQueue;
	oNodeQueue.push(a_pStart);

	//add to the SearchDFS function

	//keep looping until the stack is empty. 
	//This will only happen once we've checked every node. 
	while (!oNodeQueue.empty())
	{
		//the rest of the algorithm goes in here
		GraphNode* pCurrent = oNodeQueue.front();
		oNodeQueue.pop();

		if (pCurrent->m_aEdges[0].m_pEnd->Visited == true)
		{
			continue;
		}

		pCurrent->Visited = true;

		if (pCurrent == a_pEnd)
		{
			return true;
		}

		for (int i = 0; i < pCurrent->m_aEdges.size(); ++i)
		{
			oNodeQueue.push(pCurrent->m_aEdges[i].m_pEnd);
		}
	}

	//return false if we didn't find a_pEnd
	return false;
}


void Graph::CreateGraph(int id, float xSet, float ySet, int xNum, int yNum)
{
	Graph tempGraph;

	GraphNode* temp = new GraphNode();
	GraphNode* temp2 = new GraphNode();
	Edge tempEdge(temp, (temp2), 1);
	for (int k = 0; k < id; k++)
	{
		temp[k].SetNode(id, xSet, ySet);
		std::cout << k << std::endl;
		tempGraph.AddNode(temp);
		for (int i = 0; i < xNum; i++)
		{
			for (int j = 0; j < yNum; j++)
			{ 
				
				
				temp->m_aEdges.push_back(tempEdge);
		

			}
			
		}
	}
	
}




Graph::~Graph()
{
}