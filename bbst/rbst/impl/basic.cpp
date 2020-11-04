#ifndef call_from_test
#include <bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../rbst.cpp"
#undef call_from_test

#endif
//BEGIN CUT HERE
template<typename Data, size_t LIM>
struct Basic : RBST<Basic<Data, LIM>, Data, typename Data::Node, LIM>{
  using super = RBST<Basic, Data, typename Data::Node, LIM>;
  using Node = typename Data::Node;

  Data data;

  template<class... Args>
  Basic(Args... args):data(forward<Args>(args)...){}

  Node* touch(Node *t){return data.eval(t);}
  void toggle(Node *t){return data.toggle(t);}
  Node* pushup(Node *t){return data.pushup(t);}

  decltype(auto) get_val(Node *a){
    return data.reflect(a);
  }

  using super::toggle;
};
//END CUT HERE
#ifndef call_from_test
//INSERT ABOVE HERE
signed main(){
  return 0;
}
#endif
