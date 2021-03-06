#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <string>

#include <boost/graph/adjacency_list.hpp>

// Vertex types:
// OLT - well, OLT
// ONU - well, well, ONU
// ICO - IC ONU (Interoperator Communication ONU)
// ARN - active remote node
// PRN - passive remote node
enum VERTEX_T {OLT, ONU, ICO, PRN, ARN};

namespace boost {
  enum vertex_type_t {vertex_type};
  enum vertex_availa_t {vertex_availa};
  enum edge_availa_t {edge_availa};
  BOOST_INSTALL_PROPERTY(vertex, type);
  BOOST_INSTALL_PROPERTY(vertex, availa);
  BOOST_INSTALL_PROPERTY(edge, availa);
}

/**
 * The type of the graph we use.
 */
typedef
boost::adjacency_list<boost::vecS, boost::vecS, boost::bidirectionalS,
                      boost::property<boost::vertex_name_t, std::string,
                      boost::property<boost::vertex_availa_t, double,
                      boost::property<boost::vertex_type_t, VERTEX_T> > >,
                      boost::property<boost::edge_availa_t, double> >
graph;

typedef graph::edge_descriptor edge;
typedef graph::vertex_descriptor vertex;

template <typename G>
using Edge = typename G::edge_descriptor;

template <typename G>
using Viter = typename G::vertex_iterator;

template <typename G>
using Vertex = typename G::vertex_descriptor;

#endif /* GRAPH_HPP */
