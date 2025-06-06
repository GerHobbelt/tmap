#include <ogdf/basic/graph_generators.h>
#include <ogdf/layered/DfsAcyclicSubgraph.h>
#include <ogdf/fileformats/GraphIO.h>

using namespace ogdf;

int main(void)
{
	Graph G;
	randomSimpleGraph(G, 10, 20);

	DfsAcyclicSubgraph DAS;
	DAS.callAndReverse(G);

	GraphIO::write(G, "output-acyclic-graph.gml", GraphIO::writeGML);

	return 0;
}
