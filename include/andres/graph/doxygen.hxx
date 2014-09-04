/// \mainpage
/// # Graphs and Graph Algorithms in C++
///
/// Copyright (c) 2014 by Bjoern Andres, http://www.andres.sc
///
/// This software was developed by Bjoern Andres, Duligur Ibeling,
/// and Mark Matten.
/// Enquiries shall be directed to bjoern@andres.sc.
///
/// \section section_abstract Short Description
/// This set of header files implements directed and undirected graphs as
/// adjacency lists with constant-time access. Vertices and edges are always
/// indexed by contiguous integers. This indexing simplifies the implementation
/// of algorithms for static graphs. In dynamic settings where vertices and
/// edges are removed from a graph, indices of vertices and edges can change.
/// These changes can be followed, if necessary, by means of a visitor.
///
/// \section section_features Features
/// - Directed and undirected graphs, implemented as adjacency lists
///   with constant-time access
/// - Access to vertices and edges by contiguous integer indices
/// - Access to neighboring vertices and incident edges by STL-compliant
///   random access iterators
/// - Insertion and removal of vertices and edges
/// - Multiple edges, which are disabled by default, can be enabled
/// - Visitors that follow changes of vertex and edge indices
/// - Algorithms
///   - Connected components
///     - by breadth-first search
///     - by disjoint sets
///     .
///   - Shortest paths in weighted and unweighted graphs, as sequences of edges
///     or vertices
///     - Single source shortest path (SSSP)
///     - Single pair shortest path (SPSP)
///     .
///   - Maximum st-Flow
///     - Push-relabel algorithm with FIFO vertex selection rule.
///     - Edmonds-Karp algorithm
///     .
///   - Minimum Cost Multicut
///     - by interger programming, using Cplex or Gurobi.
///     .
///   - Set Partition
///     - by a specialization of Minimum Cost Multicut for complete graphs.
///     .
///   .
///
/// \section section_license License
/// Copyright (c) 2014 by Bjoern Andres.
///
/// This software was developed by Bjoern Andres, Duligur Ibeling,
/// and Mark Matten.
/// Enquiries shall be directed to bjoern@andres.sc.
///
/// Redistribution and use in source and binary forms, with or without
/// modification, are permitted provided that the following conditions are met:
/// - Redistributions of source code must retain the above copyright notice,
///   this list of conditions and the following disclaimer.
/// - Redistributions in binary form must reproduce the above copyright notice,
///   this list of conditions and the following disclaimer in the documentation
///   and/or other materials provided with the distribution.
/// - The name of the author must not be used to endorse or promote products
///   derived from this software without specific prior written permission.
///
/// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
/// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
/// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
/// EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
/// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
/// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
/// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
/// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
/// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
/// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///